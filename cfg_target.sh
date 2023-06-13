./configure -opensource -confirm-license -v \
    -opengl es2 -device linux-imx8-g++ \
    -device-option CROSS_COMPILE=/home/imx8/InstallQt/toolchain/gcc-linaro-7.5.0-2019.12-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu- \
    -sysroot /mnt/data/bullseye/sysroot -prefix /usr/local/qt513 \
    -gcc-sysroot \
    -webengine-webrtc \
    -opengl es2 -no-xcb -linker gold \
    -skip qtconnectivity \
    -skip qtgamepad \
    -skip qtlocation \
    -skip qtpurchasing \
    -skip qtremoteobjects \
    -skip qtscript \
    -skip qtscxml \
    -skip qtsensors \
    -skip qtspeech \
    -nomake examples -nomake tests $@

# -dbus-linked -glib \
# -gstreamer 1.0 \

# -silent


# ./configure -prefix /home/imx8/InstallQt/bullseye/emak/qt513 \
#      -qt-gfx-linuxfb -qt-gfx-qvfb \
#      -qt-gfx-vnc -no-largefile-exceptions -no-accessibility \
#      -no-qt3support -qt-zlib -no-gif -no-libtiff \
#      -qt-libpng -no-libmng -qt-libjpeg \
#      -openssl -no-cups -depths 8,16,18,32 \
#      -qt-kbd-tty -qt-kbd-qvfb -qt-kbd-linuxinput \
#      -qt-mouse-linuxinput -qt-mouse-qvfb -qt-mouse-pc \
#           -gcc-sysroot /mnt/sdcard \
