setenv fdt_file imx8mm-var-som-symphony.dtb

# Default boot type and device
setenv bootlimit 3
setenv devtype mmc
setenv devnum 2
setenv bootpart 1
setenv rootpart 2

# Boot image files
setenv initrd_addr 0x43800000
setenv fdt_addr 0x43000000
setenv fdt_file_final imx8mm-var-som-symphony.dtb
setenv fit_addr 0x43800000

# Boot firmware updates
setenv bootloader 42
setenv bootloader2 300
setenv bootloader_s 1042
setenv bootloader2_s 1300
setenv bootloader_image "imx-boot"
setenv bootloader_s_image ${bootloader_image}
setenv bootloader2_image "u-boot.itb"
setenv bootloader2_s_image ${bootloader2_image}
setenv uboot_hwpart 1

@@INCLUDE_COMMON@@
