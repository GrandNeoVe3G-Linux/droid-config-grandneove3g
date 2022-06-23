#!/bin/bash
# link necessary init services
files=(
"at_distributor.rc"
"engpc.rc"
"modem_control.rc"
"modemd.rc"
"nvitemd.rc"
"phoneserver.rc"
"atrace.rc"
"init-debug.rc"
"mediadrmserver.rc"
"installd.rc"
"mediaextractor.rc"
"superuser.rc"
"bootstat.rc"
"mtpd.rc"
"uncrypt.rc"
"debuggerd.rc"
"logcatd.rc"
"vdc.rc"
"drmserver.rc"
"logd.rc"
"perfprofd.rc"
"dumpstate.rc"
"racoon.rc"
"gatekeeperd.rc"
"mediacodec.rc"
"rild.rc"
"vold.rc"
)

mkdir -p sparse/usr/libexec/droid-hybris/system/etc/init
for i in "${files[@]}"
do
  ln -s /system/etc/init/$i sparse/usr/libexec/droid-hybris/system/etc/init/
done
