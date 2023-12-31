

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../third_party/iaccessible2/ia2_api_all.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=ARM64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_ARM64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ia2_api_all.h"

#define TYPE_FORMAT_STRING_SIZE   1467                              
#define PROC_FORMAT_STRING_SIZE   6023                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _ia2_api_all_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_TYPE_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_PROC_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString;
extern const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString;
extern const ia2_api_all_MIDL_EXPR_FORMAT_STRING ia2_api_all__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleAction_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleValue_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleText2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTable_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleImage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_ARM64__)
#error  Invalid build platform for this stub.
#endif

static const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_appName */


	/* Procedure get_description */


	/* Procedure get_relationType */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 28 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter name */


	/* Parameter description */


	/* Parameter relationType */

/* 30 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 32 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_appVersion */


	/* Procedure get_localizedRelationType */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 58 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* 2 */
/* 68 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 70 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter version */


	/* Parameter localizedRelationType */

/* 72 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */


	/* Procedure get_caretOffset */


	/* Procedure get_background */


	/* Procedure get_nTargets */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x5 ),	/* 5 */
/* 92 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x24 ),	/* 36 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 100 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 110 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 112 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter columnIndex */


	/* Parameter offset */


	/* Parameter background */


	/* Parameter nTargets */

/* 114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_target */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x6 ),	/* 6 */
/* 134 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 142 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x3 ),	/* 3 */
/* 152 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 154 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter targetIndex */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter target */

/* 162 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 164 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 166 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_targets */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x7 ),	/* 7 */
/* 182 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 188 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 190 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 202 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 204 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxTargets */

/* 206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 208 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 212 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 214 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 216 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter nTargets */

/* 218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 220 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 226 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtent */


	/* Procedure nActions */

/* 230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x3 ),	/* 3 */
/* 238 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x24 ),	/* 36 */
/* 244 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 246 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x2 ),	/* 2 */
/* 256 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 258 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nColumnsSpanned */


	/* Parameter nActions */

/* 260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 262 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 268 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure doAction */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x4 ),	/* 4 */
/* 280 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 288 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x2 ),	/* 2 */
/* 298 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 300 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter actionIndex */

/* 302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 304 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */


	/* Procedure get_description */

/* 314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x5 ),	/* 5 */
/* 322 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 330 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x3 ),	/* 3 */
/* 340 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 342 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */


	/* Parameter actionIndex */

/* 344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 346 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 350 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 352 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 354 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 358 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_keyBinding */

/* 362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x6 ),	/* 6 */
/* 370 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 372 */	NdrFcShort( 0x10 ),	/* 16 */
/* 374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 376 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 378 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x5 ),	/* 5 */
/* 388 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 390 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 392 */	0x83,		/* 131 */
			0x84,		/* 132 */

	/* Parameter actionIndex */

/* 394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 396 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxBindings */

/* 400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 402 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter keyBindings */

/* 406 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 408 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 410 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter nBindings */

/* 412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 414 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_name */

/* 424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x7 ),	/* 7 */
/* 432 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 438 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 440 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x3 ),	/* 3 */
/* 450 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 452 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter actionIndex */

/* 454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 456 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 460 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 462 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 464 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 468 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedName */

/* 472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 480 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 486 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 488 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x3 ),	/* 3 */
/* 498 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 500 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter actionIndex */

/* 502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 504 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedName */

/* 508 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 510 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 512 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 516 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRelations */

/* 520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x1c ),	/* 28 */
/* 528 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 536 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x2 ),	/* 2 */
/* 546 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 548 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nRelations */

/* 550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 552 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 558 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relation */

/* 562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x1d ),	/* 29 */
/* 570 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 578 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x3 ),	/* 3 */
/* 588 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 590 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter relationIndex */

/* 592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 594 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relation */

/* 598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 600 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 602 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 606 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relations */

/* 610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x1e ),	/* 30 */
/* 618 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 622 */	NdrFcShort( 0x24 ),	/* 36 */
/* 624 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 626 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 636 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 638 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 640 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxRelations */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relations */

/* 648 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 650 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 652 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter nRelations */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure role */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1f ),	/* 31 */
/* 674 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x24 ),	/* 36 */
/* 680 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 682 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x2 ),	/* 2 */
/* 692 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 694 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter role */

/* 696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 698 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollTo */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x20 ),	/* 32 */
/* 716 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 718 */	NdrFcShort( 0x6 ),	/* 6 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 724 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x2 ),	/* 2 */
/* 734 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 736 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter scrollType */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 742 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollToPoint */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x21 ),	/* 33 */
/* 758 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 760 */	NdrFcShort( 0x16 ),	/* 22 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 766 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x4 ),	/* 4 */
/* 776 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 778 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 780 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 784 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 786 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 790 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 796 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 802 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_groupPosition */

/* 806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x22 ),	/* 34 */
/* 814 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x5c ),	/* 92 */
/* 820 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 822 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 832 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 834 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 836 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter groupLevel */

/* 838 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 840 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter similarItemsInGroup */

/* 844 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 846 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter positionInGroup */

/* 850 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 852 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 858 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_states */

/* 862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x23 ),	/* 35 */
/* 870 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x24 ),	/* 36 */
/* 876 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 878 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x2 ),	/* 2 */
/* 888 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 890 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter states */

/* 892 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 894 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 900 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedRole */

/* 904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x24 ),	/* 36 */
/* 912 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 918 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 920 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x2 ),	/* 2 */
/* 930 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 932 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter extendedRole */

/* 934 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 936 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 938 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 942 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedRole */

/* 946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x25 ),	/* 37 */
/* 954 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 962 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x2 ),	/* 2 */
/* 972 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 974 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter localizedExtendedRole */

/* 976 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 978 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 980 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 984 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nExtendedStates */

/* 988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x26 ),	/* 38 */
/* 996 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1004 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1014 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1016 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nExtendedStates */

/* 1018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1020 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1026 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedStates */

/* 1030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1038 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 1040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1042 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1044 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1046 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1056 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 1058 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1060 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxExtendedStates */

/* 1062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1064 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter extendedStates */

/* 1068 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1070 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1072 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter nExtendedStates */

/* 1074 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedStates */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1094 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1100 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1102 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1112 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 1114 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1116 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxLocalizedExtendedStates */

/* 1118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1120 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedExtendedStates */

/* 1124 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1126 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1128 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter nLocalizedExtendedStates */

/* 1130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1132 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1138 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_uniqueID */

/* 1142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1150 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1156 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1158 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1168 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1170 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter uniqueID */

/* 1172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1174 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1180 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_windowHandle */

/* 1184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1192 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1198 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1200 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1210 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1212 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter windowHandle */

/* 1214 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1216 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1218 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1222 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_indexInParent */

/* 1226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1234 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1242 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1252 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1254 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter indexInParent */

/* 1256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1258 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1264 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locale */

/* 1268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1276 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1282 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1284 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1294 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1296 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter locale */

/* 1298 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1300 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1302 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 1304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1306 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1318 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1324 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1326 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1336 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1338 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter attributes */

/* 1340 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1342 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1344 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1348 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attribute */

/* 1352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1360 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1366 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1368 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1378 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1380 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 1382 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1384 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1386 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter attribute */

/* 1388 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1390 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1392 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1396 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_accessibleWithCaret */

/* 1400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1408 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1414 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1416 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1426 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1428 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter accessible */

/* 1430 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1432 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1434 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caretOffset */

/* 1436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1438 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1444 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relationTargetsOfType */

/* 1448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1456 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 1458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1460 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1462 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1464 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1474 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1476 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1478 */	0x83,		/* 131 */
			0x84,		/* 132 */

	/* Parameter type */

/* 1480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1482 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1484 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter maxTargets */

/* 1486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1488 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 1492 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1494 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1496 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Parameter nTargets */

/* 1498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1500 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1506 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 1508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locationInParent */

/* 1510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1518 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1526 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1536 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1538 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter x */

/* 1540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1542 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1548 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1554 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_foreground */

/* 1558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1564 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1566 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1574 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1584 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1586 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter foreground */

/* 1588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1590 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1596 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentValue */

/* 1600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1608 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1614 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1616 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1624 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1626 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1628 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter currentValue */

/* 1630 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1632 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1634 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1638 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCurrentValue */

/* 1642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1650 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1656 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1658 */	0xe,		/* 14 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1668 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1670 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 1672 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1674 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1676 */	NdrFcShort( 0x4ec ),	/* Type Offset=1260 */

	/* Return value */

/* 1678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1680 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_maximumValue */

/* 1684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1692 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1698 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1700 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1710 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1712 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter maximumValue */

/* 1714 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1716 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1718 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1722 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_minimumValue */

/* 1726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1734 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1740 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1742 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1752 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1754 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter minimumValue */

/* 1756 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1758 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1760 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1764 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure copyText */


	/* Procedure addSelection */

/* 1768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1776 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1778 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1782 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1784 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1794 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1796 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter startOffset */


	/* Parameter startOffset */

/* 1798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1800 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */


	/* Parameter endOffset */

/* 1804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1806 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1812 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1824 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 1826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1828 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1832 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1842 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1844 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1846 */	0x83,		/* 131 */
			0x84,		/* 132 */

	/* Parameter offset */

/* 1848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1850 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1856 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1862 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter textAttributes */

/* 1866 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1868 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1870 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1874 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 1876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_characterExtents */

/* 1878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1886 */	NdrFcShort( 0x40 ),	/* ARM64 Stack size/offset = 64 */
/* 1888 */	NdrFcShort( 0xe ),	/* 14 */
/* 1890 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1892 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 1894 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1904 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 1906 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1908 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 1910 */	0x85,		/* 133 */
			0x86,		/* 134 */

	/* Parameter offset */

/* 1912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1914 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 1918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1920 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1922 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 1924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1926 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1932 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 1936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1938 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 1940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 1942 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1944 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 1946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1950 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 1952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_nSelections */

/* 1954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1962 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1970 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1980 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1982 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */


	/* Parameter nSelections */

/* 1984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1986 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1992 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_offsetAtPoint */

/* 1996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 2006 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2008 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 2012 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2020 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2022 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 2024 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2026 */	0x83,		/* 131 */
			0x84,		/* 132 */

	/* Parameter x */

/* 2028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2030 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2036 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2044 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2048 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2054 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selection */

/* 2058 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2066 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2070 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2072 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2074 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2084 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2086 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2088 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter selectionIndex */

/* 2090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2092 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2096 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2098 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2104 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2110 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_text */

/* 2114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0xa ),	/* 10 */
/* 2122 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2124 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2128 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2130 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2140 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2142 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2144 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2148 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2154 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2158 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2160 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2162 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2166 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textBeforeOffset */

/* 2170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0xb ),	/* 11 */
/* 2178 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 2180 */	NdrFcShort( 0xe ),	/* 14 */
/* 2182 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2184 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2186 */	0x12,		/* 18 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2196 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2198 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2200 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 2202 */	0x85,		/* 133 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2206 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2212 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2214 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2218 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2224 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2228 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2230 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2232 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2236 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 2238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAfterOffset */

/* 2240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0xc ),	/* 12 */
/* 2248 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 2250 */	NdrFcShort( 0xe ),	/* 14 */
/* 2252 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2254 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2256 */	0x12,		/* 18 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2258 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2266 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2268 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2270 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 2272 */	0x85,		/* 133 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2276 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2282 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2284 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2286 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2288 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2292 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2294 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2298 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2300 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2302 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2306 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAtOffset */

/* 2310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0xd ),	/* 13 */
/* 2318 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 2320 */	NdrFcShort( 0xe ),	/* 14 */
/* 2322 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2324 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2326 */	0x12,		/* 18 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2336 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2338 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2340 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 2342 */	0x85,		/* 133 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2346 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2352 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2354 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2356 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2358 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2364 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2368 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2370 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2372 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2376 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 2378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSelection */

/* 2380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2386 */	NdrFcShort( 0xe ),	/* 14 */
/* 2388 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2396 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2406 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2408 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter selectionIndex */

/* 2410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2412 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2418 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCaretOffset */

/* 2422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0xf ),	/* 15 */
/* 2430 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2436 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2438 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2448 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2450 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2454 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2460 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSelection */

/* 2464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2472 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2474 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2478 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2480 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2490 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2492 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2494 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter selectionIndex */

/* 2496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2498 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2504 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2510 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2516 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nCharacters */

/* 2520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2528 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2536 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2546 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2548 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nCharacters */

/* 2550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2552 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2558 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringTo */

/* 2562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2570 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2572 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2576 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2578 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2588 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2590 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2592 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startIndex */

/* 2594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2596 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2602 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter scrollType */

/* 2606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2608 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2610 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2614 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringToPoint */

/* 2618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2626 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 2628 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2632 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2634 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2644 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2646 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2648 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 2650 */	0x85,		/* 133 */
			0x0,		/* 0 */

	/* Parameter startIndex */

/* 2652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2654 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2660 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 2664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2666 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2668 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 2670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2672 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2684 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_newText */

/* 2688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2696 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2702 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2704 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2714 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2716 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newText */

/* 2718 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2720 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2722 */	NdrFcShort( 0x4fa ),	/* Type Offset=1274 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2726 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_oldText */

/* 2730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2738 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2744 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2746 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2756 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2758 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter oldText */

/* 2760 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2762 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2764 */	NdrFcShort( 0x4fa ),	/* Type Offset=1274 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributeRange */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2780 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 2782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2784 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2786 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2788 */	0x12,		/* 18 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2792 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2798 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2800 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2802 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 2804 */	0x85,		/* 133 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2808 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter filter */

/* 2812 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2814 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2816 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter startOffset */

/* 2818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2820 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2826 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributeValues */

/* 2830 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2832 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 2834 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2838 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 2840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteText */

/* 2842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2850 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2852 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2856 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2858 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2866 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2868 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2870 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter startOffset */

/* 2872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2874 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2880 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2886 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertText */

/* 2890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2898 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2904 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2906 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2916 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2918 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter offset */

/* 2920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2922 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2926 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2928 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2930 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 2932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2934 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure cutText */

/* 2938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2944 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2946 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 2948 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2952 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2954 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2964 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2966 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter startOffset */

/* 2968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2970 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 2972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2976 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 2978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2982 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure pasteText */

/* 2986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2994 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 2996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3002 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3012 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3014 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 3016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3018 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3024 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure replaceText */

/* 3028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3036 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 3038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3042 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3044 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3054 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3056 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3058 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 3060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3062 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 3066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3068 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 3072 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3074 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3076 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 3078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3080 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAttributes */

/* 3084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3092 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 3094 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3098 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3100 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3110 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3112 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3114 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 3116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3118 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 3122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3124 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributes */

/* 3128 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3130 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3132 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 3134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3136 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchor */

/* 3140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3148 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3154 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3156 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3164 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3166 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3168 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 3170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3172 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchor */

/* 3176 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3178 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3180 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3184 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 3188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0xa ),	/* 10 */
/* 3196 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3202 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3204 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3214 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3216 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 3218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3220 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchorTarget */

/* 3224 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3226 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3228 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3232 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_startIndex */

/* 3236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0xb ),	/* 11 */
/* 3244 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3252 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3262 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3264 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */


	/* Parameter index */

/* 3266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3268 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3274 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedChildren */


	/* Procedure get_endIndex */

/* 3278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0xc ),	/* 12 */
/* 3286 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3290 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3294 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3304 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3306 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter cellCount */


	/* Parameter index */

/* 3308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3310 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3316 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_valid */

/* 3320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3326 */	NdrFcShort( 0xd ),	/* 13 */
/* 3328 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3336 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3346 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3348 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter valid */

/* 3350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3352 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3354 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3358 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nHyperlinks */

/* 3362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3370 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3376 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3378 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3388 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3390 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter hyperlinkCount */

/* 3392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3394 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3400 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlink */

/* 3404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3412 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3418 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3420 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3430 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3432 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 3434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3436 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlink */

/* 3440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3442 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3444 */	NdrFcShort( 0x512 ),	/* Type Offset=1298 */

	/* Return value */

/* 3446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3448 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinkIndex */

/* 3452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3460 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3468 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3478 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3480 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter charIndex */

/* 3482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3484 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlinkIndex */

/* 3488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3490 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3496 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinks */

/* 3500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3508 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3514 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3516 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3526 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3528 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter hyperlinks */

/* 3530 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3532 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3534 */	NdrFcShort( 0x528 ),	/* Type Offset=1320 */

	/* Parameter nHyperlinks */

/* 3536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3538 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3544 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_cellAt */


	/* Procedure get_accessibleAt */

/* 3548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3556 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 3558 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3562 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3564 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3574 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3576 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3578 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */


	/* Parameter row */

/* 3580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3582 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */


	/* Parameter column */

/* 3586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3588 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cell */


	/* Parameter accessible */

/* 3592 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3594 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3596 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 3598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3600 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_caption */


	/* Procedure get_caption */

/* 3604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3612 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3618 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3620 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3630 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3632 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */


	/* Parameter accessible */

/* 3634 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3636 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3638 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 3640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3642 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_childIndex */

/* 3646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3654 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 3656 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3658 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3660 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3662 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3672 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3674 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3676 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter rowIndex */

/* 3678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3680 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 3684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3686 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cellIndex */

/* 3690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3692 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3698 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */

/* 3702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3710 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3716 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3718 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3726 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3728 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3730 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */

/* 3732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3734 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 3738 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3740 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3742 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 3744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3746 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtentAt */

/* 3750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3758 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 3760 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3762 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3766 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3774 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3776 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3778 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3780 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */

/* 3782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3784 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 3788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3790 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nColumnsSpanned */

/* 3794 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3796 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3802 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeader */

/* 3806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3814 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3820 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3822 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3830 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3832 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3834 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter accessibleTable */

/* 3836 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3838 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3840 */	NdrFcShort( 0x546 ),	/* Type Offset=1350 */

	/* Parameter startingRowIndex */

/* 3842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3844 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3850 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */

/* 3854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3860 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3862 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 3864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3866 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3868 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3870 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3880 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3882 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellIndex */

/* 3884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3886 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 3890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3892 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3898 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */


	/* Procedure get_nColumns */

/* 3902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3908 */	NdrFcShort( 0xa ),	/* 10 */
/* 3910 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3916 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3918 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3928 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3930 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */


	/* Parameter columnCount */

/* 3932 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3934 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3940 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 3944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3950 */	NdrFcShort( 0xd ),	/* 13 */
/* 3952 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3958 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3960 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3970 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3972 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter columnCount */

/* 3974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3976 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 3978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3982 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 3984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */

/* 3986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0xe ),	/* 14 */
/* 3994 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4002 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4012 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4014 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */

/* 4016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4018 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4024 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 4028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4034 */	NdrFcShort( 0xf ),	/* 15 */
/* 4036 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4042 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4044 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4052 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4054 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4056 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 4058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4060 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 4064 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4066 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4068 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 4070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4072 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtentAt */

/* 4076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4084 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 4086 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4088 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4092 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4102 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4104 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4106 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4110 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4116 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRowsSpanned */

/* 4120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4122 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4128 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeader */

/* 4132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4140 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4146 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4148 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4158 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4160 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter accessibleTable */

/* 4162 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4164 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4166 */	NdrFcShort( 0x546 ),	/* Type Offset=1350 */

	/* Parameter startingColumnIndex */

/* 4168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4170 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4176 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */

/* 4180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4188 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4192 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4196 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4206 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4208 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellIndex */

/* 4210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4212 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowIndex */

/* 4216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4218 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4224 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedChildren */

/* 4228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4236 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 4238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4242 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4244 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4254 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4256 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4258 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxChildren */

/* 4260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4262 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter children */

/* 4266 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4268 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4270 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter nChildren */

/* 4272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4274 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4280 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 4284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4292 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 4294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4296 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4298 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4300 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4310 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4312 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4314 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxColumns */

/* 4316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4318 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columns */

/* 4322 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4324 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4326 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter nColumns */

/* 4328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4330 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4336 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 4340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4348 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 4350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4352 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4354 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4356 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4364 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4366 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4368 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4370 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxRows */

/* 4372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4374 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rows */

/* 4378 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4380 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4382 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter nRows */

/* 4384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4386 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4392 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 4396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4404 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4410 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4412 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4420 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4422 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4424 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */

/* 4426 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4428 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4430 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 4432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4434 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 4438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4444 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4446 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4450 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4452 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4454 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4464 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4466 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */

/* 4468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4470 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4476 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4478 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4482 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 4486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4492 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4494 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4498 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4502 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4510 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4512 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4514 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 4516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4518 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4524 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4526 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4530 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 4534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4542 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 4544 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4546 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4548 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4550 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4558 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4560 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4562 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4564 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4568 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4574 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4578 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4580 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4582 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4586 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 4590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4596 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4598 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4606 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4616 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4618 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4622 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4628 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 4632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4638 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4640 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4648 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4658 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4660 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 4662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4664 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4670 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 4674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4682 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4688 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4690 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4700 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4702 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4706 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4712 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 4716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4724 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4732 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4742 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4744 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 4746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4748 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtentsAtIndex */

/* 4758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4766 */	NdrFcShort( 0x40 ),	/* ARM64 Stack size/offset = 64 */
/* 4768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4770 */	NdrFcShort( 0x91 ),	/* 145 */
/* 4772 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 4774 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4784 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 4786 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4788 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 4790 */	0x85,		/* 133 */
			0x86,		/* 134 */

	/* Parameter index */

/* 4792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4794 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter row */

/* 4798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4800 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4806 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 4810 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4812 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 4814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 4816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4818 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 4820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4824 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 4826 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4830 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 4832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 4834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4840 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4842 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4850 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4858 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4860 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4862 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter modelChange */

/* 4864 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4866 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4868 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */

	/* Return value */

/* 4870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4872 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtent */


	/* Procedure get_nColumns */

/* 4876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4882 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4884 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4892 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4900 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4902 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4904 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nRowsSpanned */


	/* Parameter columnCount */

/* 4906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4908 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4914 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */


	/* Procedure get_nSelectedCells */

/* 4918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4926 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4932 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4934 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4942 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4944 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4946 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowIndex */


	/* Parameter cellCount */

/* 4948 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4950 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4956 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 4958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 4960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4966 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4968 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 4970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4972 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4974 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4976 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4984 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4986 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4988 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter columnCount */

/* 4990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4992 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 4994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4998 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 5002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0xb ),	/* 11 */
/* 5010 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5016 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5018 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5026 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5028 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5030 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 5032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5034 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 5038 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5040 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5042 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5046 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedCells */

/* 5050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5056 */	NdrFcShort( 0xc ),	/* 12 */
/* 5058 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5062 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5064 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5066 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5076 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5078 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cells */

/* 5080 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5082 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5084 */	NdrFcShort( 0x588 ),	/* Type Offset=1416 */

	/* Parameter nSelectedCells */

/* 5086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5088 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5094 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 5098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5104 */	NdrFcShort( 0xd ),	/* 13 */
/* 5106 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5110 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5112 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5114 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5122 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5124 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5126 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter selectedColumns */

/* 5128 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5130 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5132 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Parameter nColumns */

/* 5134 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5136 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5142 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 5146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5152 */	NdrFcShort( 0xe ),	/* 14 */
/* 5154 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5158 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5160 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5162 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5170 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5172 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5174 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter selectedRows */

/* 5176 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5178 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5180 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Parameter nRows */

/* 5182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5184 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5190 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 5194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5200 */	NdrFcShort( 0xf ),	/* 15 */
/* 5202 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5208 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5210 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5218 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5220 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5222 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */

/* 5224 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5226 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5228 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5232 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 5236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5244 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5248 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5252 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5260 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5262 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5264 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */

/* 5266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5268 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5274 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5276 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5280 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 5284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5290 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5292 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5296 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5300 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5308 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5310 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5312 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 5314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5316 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5322 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5324 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5328 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 5332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5338 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5340 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5348 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5358 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5360 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 5362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5364 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5370 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 5374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5380 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5382 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5390 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5398 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5400 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5402 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 5404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5406 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5412 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 5416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5422 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5424 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5430 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5432 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5440 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5442 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5444 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 5446 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5448 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5454 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 5458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5464 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5466 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5472 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5474 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5482 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5484 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5486 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 5488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5490 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5496 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 5500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5506 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5508 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5514 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5516 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5524 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5526 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5528 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter modelChange */

/* 5530 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5532 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5534 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */

	/* Return value */

/* 5536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5538 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeaderCells */

/* 5542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5548 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5550 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5556 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5558 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5566 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5568 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5570 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellAccessibles */

/* 5572 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5574 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5576 */	NdrFcShort( 0x588 ),	/* Type Offset=1416 */

	/* Parameter nColumnHeaderCells */

/* 5578 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5580 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5586 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeaderCells */

/* 5590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5596 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5598 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5602 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5604 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5606 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5614 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5616 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5618 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellAccessibles */

/* 5620 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5622 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5624 */	NdrFcShort( 0x588 ),	/* Type Offset=1416 */

	/* Parameter nRowHeaderCells */

/* 5626 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5628 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5634 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 5638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5644 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5646 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5650 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5652 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5654 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5662 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5664 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5666 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5670 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5672 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5676 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtents */

/* 5680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5686 */	NdrFcShort( 0xa ),	/* 10 */
/* 5688 */	NdrFcShort( 0x38 ),	/* ARM64 Stack size/offset = 56 */
/* 5690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5692 */	NdrFcShort( 0x91 ),	/* 145 */
/* 5694 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5696 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5704 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5706 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5708 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5710 */	0x83,		/* 131 */
			0x84,		/* 132 */
/* 5712 */	0x85,		/* 133 */
			0x0,		/* 0 */

	/* Parameter row */

/* 5714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5716 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 5720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5722 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 5726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5728 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 5732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5734 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5740 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 5742 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5746 */	NdrFcShort( 0x30 ),	/* ARM64 Stack size/offset = 48 */
/* 5748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_table */

/* 5750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5756 */	NdrFcShort( 0xb ),	/* 11 */
/* 5758 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5764 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5766 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5774 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5776 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5778 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter table */

/* 5780 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5782 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5784 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5788 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imagePosition */

/* 5792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5798 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5800 */	NdrFcShort( 0x28 ),	/* ARM64 Stack size/offset = 40 */
/* 5802 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5804 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5808 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5816 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5818 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5820 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5822 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 5824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5826 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5828 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 5830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5832 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 5836 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5838 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5844 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imageSize */

/* 5848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5854 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5856 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 5858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5860 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5864 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5872 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5874 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5876 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter height */

/* 5878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5880 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 5884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5886 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5892 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitName */

/* 5896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5902 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5904 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5910 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5912 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5920 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5922 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5924 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter name */

/* 5926 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5928 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5930 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5934 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitVersion */

/* 5938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5944 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5946 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5952 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5954 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5962 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5964 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5966 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter version */

/* 5968 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5970 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 5972 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5976 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 5978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 5980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5986 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5988 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 5990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5994 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5996 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6004 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6006 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6008 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */

/* 6010 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6012 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 6014 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 6016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6018 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 6020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 66 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 78 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 80 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 82 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 84 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 88 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 90 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (50) */
/* 92 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 94 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x13, 0x0,	/* FC_OP */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 108 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 110 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 112 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 114 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 116 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (32) */
/* 122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 124 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 130 */	NdrFcLong( 0x7cdf86ee ),	/* 2095023854 */
/* 134 */	NdrFcShort( 0xc3da ),	/* -15398 */
/* 136 */	NdrFcShort( 0x496a ),	/* 18794 */
/* 138 */	0xbd,		/* 189 */
			0xa4,		/* 164 */
/* 140 */	0x28,		/* 40 */
			0x1b,		/* 27 */
/* 142 */	0x33,		/* 51 */
			0x6e,		/* 110 */
/* 144 */	0x1f,		/* 31 */
			0xdc,		/* 220 */
/* 146 */	
			0x11, 0x0,	/* FC_RP */
/* 148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (150) */
/* 150 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 156 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 158 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 160 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 162 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 164 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 166 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (128) */
/* 170 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 172 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	
			0x13, 0x0,	/* FC_OP */
/* 178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (180) */
/* 180 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 186 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 188 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 190 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 192 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 194 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 196 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0xff5a ),	/* Offset= -166 (32) */
/* 200 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 202 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 204 */	NdrFcShort( 0x1a ),	/* Offset= 26 (230) */
/* 206 */	
			0x13, 0x0,	/* FC_OP */
/* 208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (210) */
/* 210 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 212 */	NdrFcShort( 0x4 ),	/* 4 */
/* 214 */	NdrFcShort( 0x2 ),	/* 2 */
/* 216 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 220 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 222 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 226 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 228 */	NdrFcShort( 0xffff ),	/* Offset= -1 (227) */
/* 230 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (206) */
/* 240 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 246 */	NdrFcShort( 0x18 ),	/* 24 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* Offset= 0 (250) */
/* 252 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (32) */
/* 256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (32) */
/* 260 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0xff1a ),	/* Offset= -230 (32) */
/* 264 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 266 */	
			0x12, 0x0,	/* FC_UP */
/* 268 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (22) */
/* 270 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (266) */
/* 280 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 282 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1212) */
/* 284 */	
			0x13, 0x0,	/* FC_OP */
/* 286 */	NdrFcShort( 0x38a ),	/* Offset= 906 (1192) */
/* 288 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 290 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 292 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 294 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (298) */
/* 298 */	NdrFcShort( 0x10 ),	/* 16 */
/* 300 */	NdrFcShort( 0x2f ),	/* 47 */
/* 302 */	NdrFcLong( 0x14 ),	/* 20 */
/* 306 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 308 */	NdrFcLong( 0x3 ),	/* 3 */
/* 312 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 314 */	NdrFcLong( 0x11 ),	/* 17 */
/* 318 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 320 */	NdrFcLong( 0x2 ),	/* 2 */
/* 324 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 326 */	NdrFcLong( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 332 */	NdrFcLong( 0x5 ),	/* 5 */
/* 336 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 338 */	NdrFcLong( 0xb ),	/* 11 */
/* 342 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 344 */	NdrFcLong( 0xa ),	/* 10 */
/* 348 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 350 */	NdrFcLong( 0x6 ),	/* 6 */
/* 354 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (586) */
/* 356 */	NdrFcLong( 0x7 ),	/* 7 */
/* 360 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 362 */	NdrFcLong( 0x8 ),	/* 8 */
/* 366 */	NdrFcShort( 0xfe98 ),	/* Offset= -360 (6) */
/* 368 */	NdrFcLong( 0xd ),	/* 13 */
/* 372 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (50) */
/* 374 */	NdrFcLong( 0x9 ),	/* 9 */
/* 378 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (592) */
/* 380 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 384 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (610) */
/* 386 */	NdrFcLong( 0x24 ),	/* 36 */
/* 390 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (1118) */
/* 392 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 396 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (1118) */
/* 398 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 402 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1122) */
/* 404 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 408 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1126) */
/* 410 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 414 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1130) */
/* 416 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 420 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1134) */
/* 422 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 426 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (1138) */
/* 428 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 432 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1142) */
/* 434 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 438 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (1126) */
/* 440 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 444 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1130) */
/* 446 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 450 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1146) */
/* 452 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 456 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1142) */
/* 458 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 462 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (1150) */
/* 464 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 468 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1154) */
/* 470 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 474 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (1158) */
/* 476 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 480 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (1162) */
/* 482 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 486 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (1166) */
/* 488 */	NdrFcLong( 0x10 ),	/* 16 */
/* 492 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 494 */	NdrFcLong( 0x12 ),	/* 18 */
/* 498 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 500 */	NdrFcLong( 0x13 ),	/* 19 */
/* 504 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 506 */	NdrFcLong( 0x15 ),	/* 21 */
/* 510 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 512 */	NdrFcLong( 0x16 ),	/* 22 */
/* 516 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 518 */	NdrFcLong( 0x17 ),	/* 23 */
/* 522 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 524 */	NdrFcLong( 0xe ),	/* 14 */
/* 528 */	NdrFcShort( 0x286 ),	/* Offset= 646 (1174) */
/* 530 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 534 */	NdrFcShort( 0x28a ),	/* Offset= 650 (1184) */
/* 536 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 540 */	NdrFcShort( 0x288 ),	/* Offset= 648 (1188) */
/* 542 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 546 */	NdrFcShort( 0x244 ),	/* Offset= 580 (1126) */
/* 548 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 552 */	NdrFcShort( 0x242 ),	/* Offset= 578 (1130) */
/* 554 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 558 */	NdrFcShort( 0x240 ),	/* Offset= 576 (1134) */
/* 560 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 564 */	NdrFcShort( 0x236 ),	/* Offset= 566 (1130) */
/* 566 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 570 */	NdrFcShort( 0x230 ),	/* Offset= 560 (1130) */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x0 ),	/* Offset= 0 (576) */
/* 578 */	NdrFcLong( 0x1 ),	/* 1 */
/* 582 */	NdrFcShort( 0x0 ),	/* Offset= 0 (582) */
/* 584 */	NdrFcShort( 0xffff ),	/* Offset= -1 (583) */
/* 586 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 592 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 594 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 608 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 610 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 612 */	NdrFcShort( 0x2 ),	/* Offset= 2 (614) */
/* 614 */	
			0x13, 0x0,	/* FC_OP */
/* 616 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (1100) */
/* 618 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 620 */	NdrFcShort( 0x20 ),	/* 32 */
/* 622 */	NdrFcShort( 0xa ),	/* 10 */
/* 624 */	NdrFcLong( 0x8 ),	/* 8 */
/* 628 */	NdrFcShort( 0x50 ),	/* Offset= 80 (708) */
/* 630 */	NdrFcLong( 0xd ),	/* 13 */
/* 634 */	NdrFcShort( 0x70 ),	/* Offset= 112 (746) */
/* 636 */	NdrFcLong( 0x9 ),	/* 9 */
/* 640 */	NdrFcShort( 0x90 ),	/* Offset= 144 (784) */
/* 642 */	NdrFcLong( 0xc ),	/* 12 */
/* 646 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (822) */
/* 648 */	NdrFcLong( 0x24 ),	/* 36 */
/* 652 */	NdrFcShort( 0x102 ),	/* Offset= 258 (910) */
/* 654 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 658 */	NdrFcShort( 0x11e ),	/* Offset= 286 (944) */
/* 660 */	NdrFcLong( 0x10 ),	/* 16 */
/* 664 */	NdrFcShort( 0x138 ),	/* Offset= 312 (976) */
/* 666 */	NdrFcLong( 0x2 ),	/* 2 */
/* 670 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1004) */
/* 672 */	NdrFcLong( 0x3 ),	/* 3 */
/* 676 */	NdrFcShort( 0x164 ),	/* Offset= 356 (1032) */
/* 678 */	NdrFcLong( 0x14 ),	/* 20 */
/* 682 */	NdrFcShort( 0x17a ),	/* Offset= 378 (1060) */
/* 684 */	NdrFcShort( 0xffff ),	/* Offset= -1 (683) */
/* 686 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 696 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 700 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 702 */	
			0x13, 0x0,	/* FC_OP */
/* 704 */	NdrFcShort( 0xfd56 ),	/* Offset= -682 (22) */
/* 706 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 708 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x6 ),	/* Offset= 6 (720) */
/* 716 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 718 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 720 */	
			0x11, 0x0,	/* FC_RP */
/* 722 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (686) */
/* 724 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 734 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 738 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 740 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0xfd4c ),	/* Offset= -692 (50) */
/* 744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 746 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x10 ),	/* 16 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x6 ),	/* Offset= 6 (758) */
/* 754 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 756 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 758 */	
			0x11, 0x0,	/* FC_RP */
/* 760 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (724) */
/* 762 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 772 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 776 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 778 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 780 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (592) */
/* 782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x10 ),	/* 16 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x6 ),	/* Offset= 6 (796) */
/* 792 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 794 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 796 */	
			0x11, 0x0,	/* FC_RP */
/* 798 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (762) */
/* 800 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 810 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 814 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 816 */	
			0x13, 0x0,	/* FC_OP */
/* 818 */	NdrFcShort( 0x176 ),	/* Offset= 374 (1192) */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 824 */	NdrFcShort( 0x10 ),	/* 16 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x6 ),	/* Offset= 6 (834) */
/* 830 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 832 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 834 */	
			0x11, 0x0,	/* FC_RP */
/* 836 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (800) */
/* 838 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 840 */	NdrFcLong( 0x2f ),	/* 47 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 850 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 852 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 854 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 856 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 860 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 864 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 866 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 868 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x18 ),	/* 24 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0xa ),	/* Offset= 10 (884) */
/* 876 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 878 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 880 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (838) */
/* 882 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 884 */	
			0x13, 0x0,	/* FC_OP */
/* 886 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (856) */
/* 888 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 898 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 902 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 904 */	
			0x13, 0x0,	/* FC_OP */
/* 906 */	NdrFcShort( 0xffda ),	/* Offset= -38 (868) */
/* 908 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 910 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 912 */	NdrFcShort( 0x10 ),	/* 16 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x6 ),	/* Offset= 6 (922) */
/* 918 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 920 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 922 */	
			0x11, 0x0,	/* FC_RP */
/* 924 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (888) */
/* 926 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 930 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 932 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 934 */	NdrFcShort( 0x10 ),	/* 16 */
/* 936 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 938 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 940 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (926) */
			0x5b,		/* FC_END */
/* 944 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x20 ),	/* 32 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0xa ),	/* Offset= 10 (960) */
/* 952 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 954 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 956 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (932) */
			0x5b,		/* FC_END */
/* 960 */	
			0x11, 0x0,	/* FC_RP */
/* 962 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (724) */
/* 964 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 968 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 974 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 976 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x10 ),	/* 16 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x6 ),	/* Offset= 6 (988) */
/* 984 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 986 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 988 */	
			0x13, 0x0,	/* FC_OP */
/* 990 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (964) */
/* 992 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 994 */	NdrFcShort( 0x2 ),	/* 2 */
/* 996 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1002 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1004 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1006 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1016) */
/* 1012 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1014 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1016 */	
			0x13, 0x0,	/* FC_OP */
/* 1018 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (992) */
/* 1020 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1030 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1032 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1034 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1044) */
/* 1040 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1042 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1044 */	
			0x13, 0x0,	/* FC_OP */
/* 1046 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1020) */
/* 1048 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1058 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1060 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1062 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1072) */
/* 1068 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1070 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1072 */	
			0x13, 0x0,	/* FC_OP */
/* 1074 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1048) */
/* 1076 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1080 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1082 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1084 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1090 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1092 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1094 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1096 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1076) */
/* 1098 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1102 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1104 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1084) */
/* 1106 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1106) */
/* 1108 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1110 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1112 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1114 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (618) */
			0x5b,		/* FC_END */
/* 1118 */	
			0x13, 0x0,	/* FC_OP */
/* 1120 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (868) */
/* 1122 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1124 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1126 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1128 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1130 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1132 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1134 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1136 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1138 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1140 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1142 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1144 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x13, 0x0,	/* FC_OP */
/* 1148 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (586) */
/* 1150 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1152 */	NdrFcShort( 0xfb86 ),	/* Offset= -1146 (6) */
/* 1154 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1156 */	NdrFcShort( 0xfbae ),	/* Offset= -1106 (50) */
/* 1158 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1160 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (592) */
/* 1162 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1164 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (610) */
/* 1166 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1170) */
/* 1170 */	
			0x13, 0x0,	/* FC_OP */
/* 1172 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1192) */
/* 1174 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1176 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1178 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1180 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1182 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1184 */	
			0x13, 0x0,	/* FC_OP */
/* 1186 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1174) */
/* 1188 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1190 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1192 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1194 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1198) */
/* 1200 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1202 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1204 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1206 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1208 */	NdrFcShort( 0xfc68 ),	/* Offset= -920 (288) */
/* 1210 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1212 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1214 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1216 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0xfc58 ),	/* Offset= -936 (284) */
/* 1222 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1226) */
/* 1226 */	
			0x13, 0x0,	/* FC_OP */
/* 1228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1230) */
/* 1230 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1236 */	NdrFcShort( 0x20 ),	/* ARM64 Stack size/offset = 32 */
/* 1238 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1240 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1244 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1246 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1248 */	NdrFcShort( 0xfb52 ),	/* Offset= -1198 (50) */
/* 1250 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1252 */	
			0x11, 0x0,	/* FC_RP */
/* 1254 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1260) */
/* 1256 */	
			0x12, 0x0,	/* FC_UP */
/* 1258 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (1192) */
/* 1260 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1262 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1264 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1256) */
/* 1270 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1274) */
/* 1274 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1276 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1280) */
/* 1282 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1284 */	NdrFcShort( 0xfb1c ),	/* Offset= -1252 (32) */
/* 1286 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1288 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1290 */	
			0x11, 0x0,	/* FC_RP */
/* 1292 */	NdrFcShort( 0xfc02 ),	/* Offset= -1022 (270) */
/* 1294 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1296 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 1298 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1300 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1302) */
/* 1302 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1304 */	NdrFcLong( 0x1c20f2b ),	/* 29495083 */
/* 1308 */	NdrFcShort( 0x3dd2 ),	/* 15826 */
/* 1310 */	NdrFcShort( 0x400f ),	/* 16399 */
/* 1312 */	0x94,		/* 148 */
			0x9f,		/* 159 */
/* 1314 */	0xad,		/* 173 */
			0x0,		/* 0 */
/* 1316 */	0xbd,		/* 189 */
			0xab,		/* 171 */
/* 1318 */	0x1d,		/* 29 */
			0x41,		/* 65 */
/* 1320 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1322 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1324) */
/* 1324 */	
			0x13, 0x0,	/* FC_OP */
/* 1326 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1328) */
/* 1328 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1334 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1336 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1338 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1342 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1344 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1346 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1302) */
/* 1348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1350 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1354) */
/* 1354 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1356 */	NdrFcLong( 0x35ad8070 ),	/* 900563056 */
/* 1360 */	NdrFcShort( 0xc20c ),	/* -15860 */
/* 1362 */	NdrFcShort( 0x4fb4 ),	/* 20404 */
/* 1364 */	0xb0,		/* 176 */
			0x94,		/* 148 */
/* 1366 */	0xf4,		/* 244 */
			0xf7,		/* 247 */
/* 1368 */	0x27,		/* 39 */
			0x5d,		/* 93 */
/* 1370 */	0xd4,		/* 212 */
			0x69,		/* 105 */
/* 1372 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1374 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1376) */
/* 1376 */	
			0x13, 0x0,	/* FC_OP */
/* 1378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1380) */
/* 1380 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 1382 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1384 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1386 */	NdrFcShort( 0x8 ),	/* ARM64 Stack size/offset = 8 */
/* 1388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1390 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1392 */	NdrFcShort( 0x18 ),	/* ARM64 Stack size/offset = 24 */
/* 1394 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1396 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1398 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1402) */
/* 1402 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1404 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1408) */
/* 1410 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1414 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1416 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1418 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1420) */
/* 1420 */	
			0x13, 0x0,	/* FC_OP */
/* 1422 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1424) */
/* 1424 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1430 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1432 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1434 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1438 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1440 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1442 */	NdrFcShort( 0xfa90 ),	/* Offset= -1392 (50) */
/* 1444 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1446 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1448 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1450) */
/* 1450 */	
			0x13, 0x0,	/* FC_OP */
/* 1452 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1454) */
/* 1454 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1456 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1458 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1460 */	NdrFcShort( 0x10 ),	/* ARM64 Stack size/offset = 16 */
/* 1462 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1464 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            HWND_UserSize
            ,HWND_UserMarshal
            ,HWND_UserUnmarshal
            ,HWND_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Standard interface: __MIDL_itf_ia2_api_all_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessibleRelation, ver. 0.0,
   GUID={0x7CDF86EE,0xC3DA,0x496a,{0xBD,0xA4,0x28,0x1B,0x33,0x6E,0x1F,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleRelation_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    126,
    174
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IAccessibleRelationProxyVtbl = 
{
    &IAccessibleRelation_ProxyInfo,
    &IID_IAccessibleRelation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_relationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_localizedRelationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_nTargets */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_target */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_targets */
};

const CInterfaceStubVtbl _IAccessibleRelationStubVtbl =
{
    &IID_IAccessibleRelation,
    &IAccessibleRelation_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleAction, ver. 0.0,
   GUID={0xB70D9F59,0x3B5A,0x4dba,{0xAB,0x9E,0x22,0x01,0x2F,0x60,0x7D,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleAction_FormatStringOffsetTable[] =
    {
    230,
    272,
    314,
    362,
    424,
    472
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleAction_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IAccessibleActionProxyVtbl = 
{
    &IAccessibleAction_ProxyInfo,
    &IID_IAccessibleAction,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */
};

const CInterfaceStubVtbl _IAccessibleActionStubVtbl =
{
    &IID_IAccessibleAction,
    &IAccessibleAction_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessible, ver. 0.0,
   GUID={0x618736e0,0x3c3d,0x11cf,{0x81,0x0c,0x00,0xaa,0x00,0x38,0x9b,0x71}} */


/* Object interface: IAccessible2, ver. 0.0,
   GUID={0xE89F726E,0xC4F4,0x4c19,{0xBB,0x19,0xB6,0x47,0xD7,0xFA,0x84,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    520,
    562,
    610,
    666,
    708,
    750,
    806,
    862,
    904,
    946,
    988,
    1030,
    1086,
    1142,
    1184,
    1226,
    1268,
    1310
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(46) _IAccessible2ProxyVtbl = 
{
    &IAccessible2_ProxyInfo,
    &IID_IAccessible2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */
};


static const PRPC_STUB_FUNCTION IAccessible2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2StubVtbl =
{
    &IID_IAccessible2,
    &IAccessible2_ServerInfo,
    46,
    &IAccessible2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAccessible2_2, ver. 0.0,
   GUID={0x6C9430E9,0x299D,0x4E6F,{0xBD,0x01,0xA8,0x2A,0x1E,0x88,0xD3,0xFF}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    520,
    562,
    610,
    666,
    708,
    750,
    806,
    862,
    904,
    946,
    988,
    1030,
    1086,
    1142,
    1184,
    1226,
    1268,
    1310,
    1352,
    1400,
    1448
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(49) _IAccessible2_2ProxyVtbl = 
{
    &IAccessible2_2_ProxyInfo,
    &IID_IAccessible2_2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */
};


static const PRPC_STUB_FUNCTION IAccessible2_2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_2StubVtbl =
{
    &IID_IAccessible2_2,
    &IAccessible2_2_ServerInfo,
    49,
    &IAccessible2_2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleComponent, ver. 0.0,
   GUID={0x1546D4B0,0x4C98,0x4bda,{0x89,0xAE,0x9A,0x64,0x74,0x8B,0xDD,0xE4}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleComponent_FormatStringOffsetTable[] =
    {
    1510,
    1558,
    84
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleComponentProxyVtbl = 
{
    &IAccessibleComponent_ProxyInfo,
    &IID_IAccessibleComponent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_locationInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_foreground */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_background */
};

const CInterfaceStubVtbl _IAccessibleComponentStubVtbl =
{
    &IID_IAccessibleComponent,
    &IAccessibleComponent_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleValue, ver. 0.0,
   GUID={0x35855B5B,0xC566,0x4fd0,{0xA7,0xB1,0xE6,0x54,0x65,0x60,0x03,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleValue_FormatStringOffsetTable[] =
    {
    1600,
    1642,
    1684,
    1726
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleValue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleValueProxyVtbl = 
{
    &IAccessibleValue_ProxyInfo,
    &IID_IAccessibleValue,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_currentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::setCurrentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_maximumValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_minimumValue */
};

const CInterfaceStubVtbl _IAccessibleValueStubVtbl =
{
    &IID_IAccessibleValue,
    &IAccessibleValue_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleText, ver. 0.0,
   GUID={0x24FD2FFB,0x3AAD,0x4a08,{0x83,0x35,0xA3,0xAD,0x89,0xC0,0xFB,0x4B}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText_FormatStringOffsetTable[] =
    {
    1768,
    1816,
    84,
    1878,
    1954,
    1996,
    2058,
    2114,
    2170,
    2240,
    2310,
    2380,
    2422,
    2464,
    2520,
    2562,
    2618,
    2688,
    2730
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IAccessibleTextProxyVtbl = 
{
    &IAccessibleText_ProxyInfo,
    &IID_IAccessibleText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */
};

const CInterfaceStubVtbl _IAccessibleTextStubVtbl =
{
    &IID_IAccessibleText,
    &IAccessibleText_ServerInfo,
    22,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleText2, ver. 0.0,
   GUID={0x9690A9CC,0x5C80,0x4DF5,{0x85,0x2E,0x2D,0x5A,0xE4,0x18,0x9A,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText2_FormatStringOffsetTable[] =
    {
    1768,
    1816,
    84,
    1878,
    1954,
    1996,
    2058,
    2114,
    2170,
    2240,
    2310,
    2380,
    2422,
    2464,
    2520,
    2562,
    2618,
    2688,
    2730,
    2772
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleText2ProxyVtbl = 
{
    &IAccessibleText2_ProxyInfo,
    &IID_IAccessibleText2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText2::get_attributeRange */
};

const CInterfaceStubVtbl _IAccessibleText2StubVtbl =
{
    &IID_IAccessibleText2,
    &IAccessibleText2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleEditableText, ver. 0.0,
   GUID={0xA59AA09A,0x7011,0x4b65,{0x93,0x9D,0x32,0xB1,0xFB,0x55,0x47,0xE3}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleEditableText_FormatStringOffsetTable[] =
    {
    1768,
    2842,
    2890,
    2938,
    2986,
    3028,
    3084
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IAccessibleEditableTextProxyVtbl = 
{
    &IAccessibleEditableText_ProxyInfo,
    &IID_IAccessibleEditableText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::copyText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::deleteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::insertText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::cutText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::pasteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::replaceText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::setAttributes */
};

const CInterfaceStubVtbl _IAccessibleEditableTextStubVtbl =
{
    &IID_IAccessibleEditableText,
    &IAccessibleEditableText_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHyperlink, ver. 0.0,
   GUID={0x01C20F2B,0x3DD2,0x400f,{0x94,0x9F,0xAD,0x00,0xBD,0xAB,0x1D,0x41}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHyperlink_FormatStringOffsetTable[] =
    {
    230,
    272,
    314,
    362,
    424,
    472,
    3140,
    3188,
    3236,
    3278,
    3320
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IAccessibleHyperlinkProxyVtbl = 
{
    &IAccessibleHyperlink_ProxyInfo,
    &IID_IAccessibleHyperlink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchor */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchorTarget */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_startIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_endIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_valid */
};

const CInterfaceStubVtbl _IAccessibleHyperlinkStubVtbl =
{
    &IID_IAccessibleHyperlink,
    &IAccessibleHyperlink_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext, ver. 0.0,
   GUID={0x6B4F8BBF,0xF1F2,0x418a,{0xB3,0x5E,0xA1,0x95,0xBC,0x41,0x03,0xB9}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext_FormatStringOffsetTable[] =
    {
    1768,
    1816,
    84,
    1878,
    1954,
    1996,
    2058,
    2114,
    2170,
    2240,
    2310,
    2380,
    2422,
    2464,
    2520,
    2562,
    2618,
    2688,
    2730,
    3362,
    3404,
    3452
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IAccessibleHypertextProxyVtbl = 
{
    &IAccessibleHypertext_ProxyInfo,
    &IID_IAccessibleHypertext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */
};

const CInterfaceStubVtbl _IAccessibleHypertextStubVtbl =
{
    &IID_IAccessibleHypertext,
    &IAccessibleHypertext_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext2, ver. 0.0,
   GUID={0xCF64D89F,0x8287,0x4B44,{0x85,0x01,0xA8,0x27,0x45,0x3A,0x60,0x77}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext2_FormatStringOffsetTable[] =
    {
    1768,
    1816,
    84,
    1878,
    1954,
    1996,
    2058,
    2114,
    2170,
    2240,
    2310,
    2380,
    2422,
    2464,
    2520,
    2562,
    2618,
    2688,
    2730,
    3362,
    3404,
    3452,
    3500
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IAccessibleHypertext2ProxyVtbl = 
{
    &IAccessibleHypertext2_ProxyInfo,
    &IID_IAccessibleHypertext2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext2::get_hyperlinks */
};

const CInterfaceStubVtbl _IAccessibleHypertext2StubVtbl =
{
    &IID_IAccessibleHypertext2,
    &IAccessibleHypertext2_ServerInfo,
    26,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable, ver. 0.0,
   GUID={0x35AD8070,0xC20C,0x4fb4,{0xB0,0x94,0xF4,0xF7,0x27,0x5D,0xD4,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable_FormatStringOffsetTable[] =
    {
    3548,
    3604,
    3646,
    3702,
    3750,
    3806,
    3854,
    3902,
    3236,
    3278,
    3944,
    3986,
    4028,
    4076,
    4132,
    4180,
    4228,
    4284,
    4340,
    4396,
    4438,
    4486,
    4534,
    4590,
    4632,
    4674,
    4716,
    4758,
    4834
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(32) _IAccessibleTableProxyVtbl = 
{
    &IAccessibleTable_ProxyInfo,
    &IID_IAccessibleTable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_accessibleAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_childIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowColumnExtentsAtIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTableStubVtbl =
{
    &IID_IAccessibleTable,
    &IAccessibleTable_ServerInfo,
    32,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable2, ver. 0.0,
   GUID={0x6167f295,0x06f0,0x4cdd,{0xa1,0xfa,0x02,0xe2,0x51,0x53,0xd8,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable2_FormatStringOffsetTable[] =
    {
    3548,
    3604,
    314,
    4876,
    1954,
    4918,
    4960,
    3902,
    5002,
    5050,
    5098,
    5146,
    5194,
    5236,
    5284,
    5332,
    5374,
    5416,
    5458,
    5500
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleTable2ProxyVtbl = 
{
    &IAccessibleTable2_ProxyInfo,
    &IID_IAccessibleTable2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_cellAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTable2StubVtbl =
{
    &IID_IAccessibleTable2,
    &IAccessibleTable2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTableCell, ver. 0.0,
   GUID={0x594116B1,0xC99F,0x4847,{0xAD,0x06,0x0A,0x7A,0x86,0xEC,0xE6,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTableCell_FormatStringOffsetTable[] =
    {
    230,
    5542,
    84,
    4876,
    5590,
    4918,
    5638,
    5680,
    5750
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IAccessibleTableCellProxyVtbl = 
{
    &IAccessibleTableCell_ProxyInfo,
    &IID_IAccessibleTableCell,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowColumnExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_table */
};

const CInterfaceStubVtbl _IAccessibleTableCellStubVtbl =
{
    &IID_IAccessibleTableCell,
    &IAccessibleTableCell_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleImage, ver. 0.0,
   GUID={0xFE5ABB3D,0x615E,0x4f7b,{0x90,0x9F,0x5F,0x0E,0xDA,0x9E,0x8D,0xDE}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleImage_FormatStringOffsetTable[] =
    {
    0,
    5792,
    5848
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleImage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleImageProxyVtbl = 
{
    &IAccessibleImage_ProxyInfo,
    &IID_IAccessibleImage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imagePosition */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imageSize */
};

const CInterfaceStubVtbl _IAccessibleImageStubVtbl =
{
    &IID_IAccessibleImage,
    &IAccessibleImage_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0016, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleApplication, ver. 0.0,
   GUID={0xD49DED83,0x5B25,0x43F4,{0x9B,0x95,0x93,0xB4,0x45,0x95,0x97,0x9E}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleApplication_FormatStringOffsetTable[] =
    {
    0,
    42,
    5896,
    5938
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleApplicationProxyVtbl = 
{
    &IAccessibleApplication_ProxyInfo,
    &IID_IAccessibleApplication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appVersion */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitVersion */
};

const CInterfaceStubVtbl _IAccessibleApplicationStubVtbl =
{
    &IID_IAccessibleApplication,
    &IAccessibleApplication_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleDocument, ver. 0.0,
   GUID={0xC48C7FCF,0x4AB5,0x4056,{0xAF,0xA6,0x90,0x2D,0x6E,0x1D,0x11,0x49}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleDocument_FormatStringOffsetTable[] =
    {
    5980
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IAccessibleDocumentProxyVtbl = 
{
    &IAccessibleDocument_ProxyInfo,
    &IID_IAccessibleDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleDocument::get_anchorTarget */
};

const CInterfaceStubVtbl _IAccessibleDocumentStubVtbl =
{
    &IID_IAccessibleDocument,
    &IAccessibleDocument_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0018, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ia2_api_all__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ia2_api_all_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IAccessibleHyperlinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleImageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleActionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleValueProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleApplicationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTable2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleEditableTextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertext2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleComponentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableCellProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleText2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleRelationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTextProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ia2_api_all_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IAccessibleHyperlinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleImageStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleActionStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleValueStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleApplicationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTable2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleEditableTextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertext2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleComponentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableCellStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleText2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleRelationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTextStubVtbl,
    0
};

PCInterfaceName const _ia2_api_all_InterfaceNamesList[] = 
{
    "IAccessibleHyperlink",
    "IAccessibleImage",
    "IAccessibleAction",
    "IAccessibleValue",
    "IAccessible2",
    "IAccessibleTable",
    "IAccessibleApplication",
    "IAccessibleTable2",
    "IAccessibleEditableText",
    "IAccessibleHypertext2",
    "IAccessibleComponent",
    "IAccessibleTableCell",
    "IAccessibleHypertext",
    "IAccessibleText2",
    "IAccessibleDocument",
    "IAccessible2_2",
    "IAccessibleRelation",
    "IAccessibleText",
    0
};

const IID *  const _ia2_api_all_BaseIIDList[] = 
{
    0,
    0,
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    0
};


#define _ia2_api_all_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ia2_api_all, pIID, n)

int __stdcall _ia2_api_all_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ia2_api_all, 18, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ia2_api_all, 18, *pIndex )
    
}

const ExtendedProxyFileInfo ia2_api_all_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ia2_api_all_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ia2_api_all_StubVtblList,
    (const PCInterfaceName * ) & _ia2_api_all_InterfaceNamesList,
    (const IID ** ) & _ia2_api_all_BaseIIDList,
    & _ia2_api_all_IID_Lookup, 
    18,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_ARM64)*/

