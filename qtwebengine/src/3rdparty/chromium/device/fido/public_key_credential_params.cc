// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "device/fido/public_key_credential_params.h"

#include <utility>

namespace device {

// static
base::Optional<PublicKeyCredentialParams>
PublicKeyCredentialParams::CreateFromCBORValue(const cbor::Value& cbor_value) {
  if (!cbor_value.is_array())
    return base::nullopt;

  std::vector<PublicKeyCredentialParams::CredentialInfo> credential_params;
  for (const auto& credential : cbor_value.GetArray()) {
    if (!credential.is_map() || credential.GetMap().size() != 2)
      return base::nullopt;

    const auto& credential_map = credential.GetMap();
    const auto credential_type_it =
        credential_map.find(cbor::Value(kCredentialTypeMapKey));
    const auto algorithm_type_it =
        credential_map.find(cbor::Value(kCredentialAlgorithmMapKey));

    if (credential_type_it == credential_map.end() ||
        !credential_type_it->second.is_string() ||
        credential_type_it->second.GetString() != kPublicKey ||
        algorithm_type_it == credential_map.end() ||
        !algorithm_type_it->second.is_integer()) {
      return base::nullopt;
    }

    credential_params.push_back(PublicKeyCredentialParams::CredentialInfo{
        CredentialType::kPublicKey,
        static_cast<int>(algorithm_type_it->second.GetInteger())});
  }

  return PublicKeyCredentialParams(std::move(credential_params));
}

PublicKeyCredentialParams::PublicKeyCredentialParams(
    std::vector<CredentialInfo> credential_params)
    : public_key_credential_params_(std::move(credential_params)) {}

PublicKeyCredentialParams::PublicKeyCredentialParams(
    const PublicKeyCredentialParams& other) = default;

PublicKeyCredentialParams::PublicKeyCredentialParams(
    PublicKeyCredentialParams&& other) = default;

PublicKeyCredentialParams& PublicKeyCredentialParams::operator=(
    const PublicKeyCredentialParams& other) = default;

PublicKeyCredentialParams& PublicKeyCredentialParams::operator=(
    PublicKeyCredentialParams&& other) = default;

PublicKeyCredentialParams::~PublicKeyCredentialParams() = default;

cbor::Value PublicKeyCredentialParams::ConvertToCBOR() const {
  cbor::Value::ArrayValue credential_param_array;
  credential_param_array.reserve(public_key_credential_params_.size());

  for (const auto& credential : public_key_credential_params_) {
    cbor::Value::MapValue cbor_credential_map;
    cbor_credential_map.emplace(cbor::Value(kCredentialTypeMapKey),
                                cbor::Value(CredentialTypeToString(credential.type)));
    cbor_credential_map.emplace(cbor::Value(kCredentialAlgorithmMapKey),
                                cbor::Value(credential.algorithm));
    credential_param_array.emplace_back(std::move(cbor_credential_map));
  }
  return cbor::Value(std::move(credential_param_array));
}

}  // namespace device
