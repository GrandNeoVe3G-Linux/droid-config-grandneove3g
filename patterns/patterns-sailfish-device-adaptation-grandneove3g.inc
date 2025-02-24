# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-adaptation-grandneove3g
Summary: Jolla HW Adaptation grandneove3g
Requires: droid-hal-grandneove3g
Requires: droid-hal-grandneove3g-img-boot
Requires: droid-hal-grandneove3g-kernel-modules
Requires: droid-config-grandneove3g-sailfish
Requires: droid-config-grandneove3g-pulseaudio-settings
Requires: droid-config-grandneove3g-policy-settings
Requires: droid-config-grandneove3g-preinit-plugin
Requires: droid-config-grandneove3g-flashing
Requires: droid-config-grandneove3g-bluez5
Requires: droid-hal-version-grandneove3g

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Telephony
#Requires: ofono-ril-binder-plugin
Requires: dummy_netd
Requires: ofono-ril-plugin

# Bluetooth
Requires: broadcom-bluetooth-bluez5
Requires: bluetooth-rfkill-event-hciattach

# Splash screen
Requires: yamuisplash

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-jb2q
Requires: pulseaudio-modules-droid-hidl

# The -dummy-af is needed for newer devices that run the main
# audiosystem-passthrough in qti mode (e.g. >=Android 9 Qualcomm),
# to fix non-responding Camera app and/or voice during a phone call:
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
#Requires: gstreamer1.0-droid-tools
#Requires: droid-camres
Requires: gmp-droid

# This is needed for notification LEDs
#Requires: mce-plugin-libhybris

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC support
# 1. binder plugin requires Android 8 or a newer base
# 2. pn54x plugin talks directly to pn54x driver
# These plugins are mutually exclusive, you need to pick one:
#Requires: nfcd-binder-plugin
#Requires: nfcd-pn54x-plugin

%description -n patterns-sailfish-device-adaptation-grandneove3g
Pattern with packages for grandneove3g HW Adaptation

%files -n patterns-sailfish-device-adaptation-grandneove3g
