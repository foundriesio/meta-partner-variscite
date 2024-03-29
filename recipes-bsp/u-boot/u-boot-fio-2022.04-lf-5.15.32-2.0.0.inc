FILESEXTRAPATHS:prepend := "${THISDIR}/u-boot-fio-2022.04-lf-5.15.32-2.0.0:"

# NOT APPLIED
# 0028-FIO-fromlist-mx7ulp-add-base-SPL-support-for-mx7ulp.patch
# 0127-FIO-internal-spl-imx7ulp-fix-config-syntax.patch
# 0136-FIO-fromtree-imx8m-drivers-ddr-Change-padding-of-DDR.patch
# 0154-FIO-toup-ARM-mach-imx-imx8ulp-Fix-SPL_CRYPTO-name.patch
# 0172-FIO-fromtree-toradex-apalis-imx8x-drop-support-for-a.patch
# 0173-FIO-fromtree-configs-toradex-enable-missing-fit-opti.patch
# 0174-FIO-fromtree-configs-tdx-Do-not-overwrite-fdtfile-if.patch
# 0175-FIO-fromtree-board-toradex-drop-colibri-pxa270-suppo.patch
# 0176-FIO-fromtree-fdt-Add-U-Boot-version-to-chosen-node.patch
# 0177-FIO-fromtree-toradex-tdx-cfg-block-add-new-8gb-apali.patch
# 0178-FIO-fromtree-imx8m-fixup-thermal-trips.patch
# 0179-FIO-fromtree-toradex-tdx-cfg-block-use-only-snprintf.patch
# 0180-FIO-fromtree-toradex-tdx-cfg-block-use-defines-for-s.patch
# 0181-FIO-fromtree-toradex-tdx-cfg-block-extend-assembly-v.patch
# 0182-FIO-fromtree-toradex-tdx-cfg-block-add-new-toradex-o.patch
# 0183-FIO-fromtree-toradex-tdx-cfg-block-add-0068-i.mx-8m-.patch
# 0184-FIO-tonxp-fastboot-fix-build-warnings.patch
# 0185-FIO-toup-net-dm-dwc_eth_qos-support-the-phy-supply-b.patch
# 0186-FIO-fromtree-toradex-common-Remove-stale-comments-ab.patch
# 0187-FIO-fromtree-toradex-common-Use-ARRAY_SIZE-macro.patch
# 0188-FIO-fromtree-toradex-tdx-cfg-block-Cleanup-interacti.patch
# 0189-FIO-fromtree-toradex-common-Remove-stale-function-de.patch
# 0190-FIO-fromtree-toradex-common-Remove-ifdef-usage-for-2.patch
# 0191-FIO-fromtree-toradex-tdx-cfg-block-Use-official-SKU-.patch
# 0192-FIO-fromtree-toradex-common-Improve-product-serial-p.patch
# 0193-FIO-fromtree-verdin-imx8mm-verdin-imx8mp-Fix-default.patch
# 0194-FIO-fromlist-board-verdin-imx8mm-add-call-to-ft_comm.patch
# 0195-FIO-fromlist-board-verdin-imx8mp-add-call-to-ft_comm.patch
# 0196-FIO-fromtree-ARM-imx8mm-verdin-imx8mm-Rework-board_e.patch
# 0197-FIO-fromtree-ARM-imx8mm-verdin-imx8mm-Drop-superfluo.patch
# 0198-FIO-fromtree-configs-verdin-imx8mm-verdin-imx8mp-ena.patch
# 0199-FIO-fromtree-ARM-imx8mm-verdin-imx8mm-fix-board-hang.patch
# 0200-FIO-fromtree-toradex-imx8-set-default-dhcp-distroboo.patch
# 0201-FIO-fromlist-verdin-imx8mm-do-not-save-environment-w.patch
# 0202-FIO-fromlist-verdin-imx8mp-do-not-save-environment-w.patch
# 0203-FIO-tonxp-board-verdin-imx8mm-add-USB-power-hooks.patch
# 0204-FIO-fromlist-verdin-imx8mm-verdin-imx8mp-update-env-.patch
# 0205-FIO-fromlist-verdin-imx8mm-prepare-for-optional-job-.patch
# 0206-FIO-fromlist-verdin-imx8mm-improve-and-extend-boot-d.patch
# 0207-FIO-fromlist-verdin-imx8mm-various-config-additions-.patch
# 0208-FIO-tonxp-configs-verdin-imx8mm-add-missing-USB-feat.patch
# 0209-FIO-tonxp-configs-verdin-imx8mm-disable-LTO.patch
# 0210-FIO-fromlist-ARM-imx8mp-verdin-imx8mp-Add-memory-siz.patch
# 0211-FIO-fromtree-imx8-ls10xx-Use-a-sane-SYS_MALLOC_F_LEN.patch
# 0212-FIO-fromlist-verdin-imx8mm-verdin-imx8mp-drop-obsole.patch
# 0213-FIO-fromlist-verdin-imx8mp-various-config-additions-.patch
# 0214-FIO-tonxp-board-verdin-imx8mp-add-USB-power-hooks.patch
# 0215-FIO-tonxp-arm64-dts-imx8mp-add-rdc-config.patch
# 0216-FIO-tonxp-board-verdin-imx8mp-backport-USB-code.patch
# 0217-FIO-tonxp-arm64-dts-verdin-imx8mp-add-downstream-usb.patch
# 0218-FIO-tonxp-board-toradex-verdin-imx8mp-add-usb_1_en-h.patch
# 0219-FIO-tonxp-configs-verdin-imx8mp-enable-phy-and-drop-.patch
# 0220-FIO-extras-configs-verdin-imx8mm-revert-to-old-bootc.patch
# 0221-FIO-fromlist-arm-dts-verdin-imx8mp-enable-caam-in-SP.patch
# 0222-FIO-fromlist-verdin-imx8mp-spl-initialize-caam.patch
# 0223-FIO-fromlist-configs-verdin-imx8mp-enable-caam.patch
# 0224-FIO-tosquash-fastboot-correctly-fix-build-warning.patch
# 0232-FIO-fromtree-include-apalis-imx8-different-fixes-for.patch

# MODIFIED
# 0060-FIO-internal-imx-add-secondary_boot-command.patch
# 0071-FIO-extras-Kconfig-fix-selecting-FSL_CAAM-without-HA.patch

SRC_URI:append = " \
    file://0001-FIO-fromtree-mmc-board-code-add-a-weak-common-implem.patch \
    file://0002-FIO-extra-apalis_imx6-fix-redefinition-of-PHY_ANEG_T.patch \
    file://0003-FIO-internal-mx6-fix-redefining-CONFIG_SUPPORT_EMMC_.patch \
    file://0004-FIO-internal-mx6-allow-redeclaration-of-get_board_se.patch \
    file://0005-FIO-fromlist-apalis_imx6-allocate-specific-region-of.patch \
    file://0006-FIO-toup-drivers-rpmb-replicate-linux-mmc-configurat.patch \
    file://0007-FIO-toup-drivers-rpmb-use-cache-aligned-buffers-on-r.patch \
    file://0008-FIO-internal-common-fiovb-foundries.io-verified-boot.patch \
    file://0009-FIO-internal-mach-imx-spl-allow-RAM-load-instead-of-.patch \
    file://0010-FIO-internal-fastboot-establish-BOOTLOADER2-raw-part.patch \
    file://0011-FIO-extras-imx-support-SPL-build-for-TARGET_MX6ULL_1.patch \
    file://0012-FIO-extras-imx-mx6ullevk-make-USB-configs-specific-t.patch \
    file://0013-FIO-extras-imx-mx6ulevk-make-USB-configs-specific-to.patch \
    file://0014-FIO-extras-arm-apalis_imx6-simplify-boot-targets.patch \
    file://0015-FIO-extras-fit-verify-abort-if-signature-not-found-a.patch \
    file://0016-FIO-extras-usb-sdp-only-allow-imx-u-boot-images-if-l.patch \
    file://0017-FIO-extras-spl-mmc-only-load-legacy-if-set.patch \
    file://0018-FIO-extras-cmd-bootm-allow-fit-with-imx_hab.patch \
    file://0019-FIO-extras-autoboot-imx-only-boot-from-usb-if-fastbo.patch \
    file://0020-FIO-internal-imx_env-set-mfg-to-run-fastboot-by-defa.patch \
    file://0021-FIO-toup-fpga-imx_m4-boot-M4.patch \
    file://0022-FIO-toup-arch-mach-imx-fiohab-support-tool-to-enable.patch \
    file://0023-FIO-extras-imx7ulpea-dts-enable-DM-QSPI-flash.patch \
    file://0024-FIO-toup-arch-arm-imx7ulp-fix-rpmsg-reservation-conf.patch \
    file://0025-FIO-extras-imx-imx7ulp-com-add-sys_reset-config.patch \
    file://0026-FIO-extras-imx-mx7ulpea-ucom-system-reset-function.patch \
    file://0027-FIO-toup-mx7ulp_com-sync-changes-from-the-EA-BSP-tre.patch \
    file://0029-FIO-extras-mx7ulp_com-force-board_usb_phy_mode-to-de.patch \
    file://0030-FIO-extras-fastboot-don-t-enable-console-mux-by-defa.patch \
    file://0031-FIO-fromlist-board-rpi-always-set-fdt_addr-if-provid.patch \
    file://0032-FIO-fromlist-imx-syscounter-allow-timer_init-for-SPL.patch \
    file://0033-FIO-toup-usb-gadget-ci_udc-introduce-board_ci_udc_ph.patch \
    file://0034-FIO-toup-spl-remove-duplicate-SPL_MD5-option.patch \
    file://0035-FIO-toup-spl-move-SPL_CRC32-option-to-lib-Kconfig.patch \
    file://0036-FIO-fromlist-dm-fix-mis-word-in-SPL_DM-description.patch \
    file://0037-FIO-fromlist-spl-Add-CONFIG_SPL_FIT_SIGNATURE_STRICT.patch \
    file://0038-FIO-fromlist-cmd-Add-CONFIG_FIT_SIGNATURE_STRICT.patch \
    file://0039-FIO-extra-image-fit-dont-use-weak-hash-if-SIGNATURE_.patch \
    file://0040-FIO-extra-boot-dont-enable-MD5-SHA1-if-SIGNATURE_STR.patch \
    file://0041-FIO-toup-arch-mach-imx-hab-add-SPL_IMX_HAB-config.patch \
    file://0042-FIO-toup-spl-add-fixed-memory-node-in-target-fdt-als.patch \
    file://0043-FIO-toup-spl-imx-also-call-dram_init_banksize-when-b.patch \
    file://0044-FIO-extras-imx-mx7ulp-disable-u-boot-NONSEC-PSCI-if-.patch \
    file://0045-FIO-internal-imx8m-don-t-enable-CAAM-if-OP-TEE-is-us.patch \
    file://0046-FIO-internal-Kconfig-fix-recursive-dependency.patch \
    file://0047-FIO-internal-usb-hub-don-t-use-env-if-it-s-not-enabl.patch \
    file://0048-FIO-internal-imx8mm_evk-fix-build-issues-when-SPL_DM.patch \
    file://0049-FIO-internal-imx8mmevk-drop-hardcoded-USB-configurat.patch \
    file://0050-FIO-toup-arm-dts-imx6ull-14x14-evk-u-boot-add-rngb.patch \
    file://0051-FIO-internal-imx8mq_evk-disable-DM_I2C-PMIC-MMC-for-.patch \
    file://0052-FIO-internal-imx-mx7ulp-Decouple-mmc_get_env_dev-wit.patch \
    file://0053-FIO-internal-mx7ulp-don-t-enable-CAAM-if-OP-TEE-is-u.patch \
    file://0054-FIO-internal-imx8mm_evk-runtime-detection-raw-sector.patch \
    file://0055-FIO-internal-fastboot-add-support-for-redundant-boot.patch \
    file://0056-FIO-internal-ARM-imx8m-add-support-for-reading-out-t.patch \
    file://0057-FIO-internal-ARM-imx8m-change-primary-secondary-boot.patch \
    file://0058-FIO-toup-DM-crypto-fsl-fix-alignment-issue-in-fsl_rs.patch \
    file://0059-FIO-internal-imx-mmc-detect-offset-of-next-image-in-.patch \
    file://0060-FIO-internal-imx-add-secondary_boot-command.patch \
    file://0061-FIO-internal-dts-imx6ull-14x14-evk-drop-imx6ul-u-boo.patch \
    file://0062-FIO-internal-imx-secondary_boot-add-imx_warm_reset-c.patch \
    file://0063-FIO-internal-ARM-imx8m-add-support-for-reading-out-S.patch \
    file://0064-FIO-internal-imx-add-cmd-fo-reading-out-SEC_CONFIG-1.patch \
    file://0065-FIO-toup-rsa-force-using-ras_mod_exp_sw-if-DM-disabl.patch \
    file://0066-FIO-internal-mx6-PERSIST_SECONDARY_BOOT-handling.patch \
    file://0067-FIO-internal-fastboot-fsl-add-sit-offset-for-imx6ul-.patch \
    file://0068-FIO-internal-imx-secondary_boot-convert-to-cmd_tbl.patch \
    file://0069-FIO-internal-imx8mm_evk-update-SPL-DM_I2C-definition.patch \
    file://0070-FIO-toup-imx8mm_evk-increase-CONFIG_SYS_SPL_MALLOC_S.patch \
    file://0071-FIO-extras-Kconfig-fix-selecting-FSL_CAAM-without-HA.patch \
    file://0072-FIO-internal-imx8mm_evk-Add-PMIC-support-for-old-boa.patch \
    file://0073-FIO-internal-imx8mm_evk-Dynamically-set-fdt_file-bas.patch \
    file://0074-FIO-internal-power-pca9450-Add-print-after-PMIC-init.patch \
    file://0075-FIO-internal-spl-enable-hw_watchdog-if-it-enabled.patch \
    file://0076-FIO-internal-mx6ullevk-drop-empty-reset_cpu.patch \
    file://0077-FIO-internal-drivers-fastboot-increase-command-buffe.patch \
    file://0078-FIO-internal-watchdog-introduce-SPL_HW_WATCHDOG.patch \
    file://0079-FIO-internal-hash-disable-crc16-ccitt-if-FIT_SIGNATU.patch \
    file://0080-FIO-internal-mx6-add-function-for-checking-board-clo.patch \
    file://0081-FIO-internal-imx-secondary_boot-enable-support-for-M.patch \
    file://0082-FIO-internal-ARM-dts-imx6ul-add-psci-node.patch \
    file://0083-FIO-internal-imx-add-support-of-secondary-boot-for-M.patch \
    file://0084-FIO-internal-fastboot-fsl-add-sit-offset-for-MX6-SoC.patch \
    file://0085-FIO-extras-imx8mm_evk-enable-IMX_WATCHDOG.patch \
    file://0086-FIO-extras-imx-add-low-level-code-for-secondary-boot.patch \
    file://0087-FIO-extras-add-mx7-and-mx7ulp-support.patch \
    file://0088-FIO-internal-optee-obtain-emmc-rpmb-info-from-dt.patch \
    file://0089-FIO-internal-Update-Kconfig-for-MX7-Secondary-boot.patch \
    file://0090-FIO-extras-imx-mx7ulp-use-mode-register-to-verify-if.patch \
    file://0091-FIO-internal-arch-arm-dts-imx6-apalis-u-boot-Add-RPM.patch \
    file://0092-FIO-extras-cmd-bootz-don-t-require-HAB-verify-on-clo.patch \
    file://0093-FIO-internal-imx8mq_evk-runtime-detection-raw-sector.patch \
    file://0094-FIO-internal-imx8qm_mek-adjust-loadaddr-and-scriptad.patch \
    file://0095-FIO-internal-imx8mm_evk-fix-unused-variables.patch \
    file://0096-FIO-internal-imx8-use-different-address-for-FIT-buff.patch \
    file://0097-FIO-toup-ARM-dts-fsl-imx8qm-apalis-don-t-include-u-b.patch \
    file://0098-FIO-internal-apalix-imx8-up-port-initial-implementat.patch \
    file://0099-FIO-toup-ARM-dts-fsl-imx8qm-apalis-use-dm-spl-proper.patch \
    file://0100-FIO-toup-ARM-dts-fsl-imx8qm-apalis-add-missing-nodes.patch \
    file://0101-FIO-toup-apalis-imx8-add-support-of-SPL-build.patch \
    file://0102-FIO-toup-apalis-imx8-enable-SPL-build.patch \
    file://0103-FIO-toup-apalis-imx8-sync-config-with-Kconfig-defaul.patch \
    file://0104-FIO-internal-arch-arm-dts-imx8mm-evk-u-boot-add-RPMB.patch \
    file://0105-FIO-toimx-ARM-mx6-check-the-need-to-build-module_fus.patch \
    file://0106-FIO-toup-spl-provide-weak-empty-stub-for-reset_cpu.patch \
    file://0107-FIO-internal-imx8mm_evk-fix-looking-for-undeclared-s.patch \
    file://0108-FIO-toup-tools-image-host-print-error-messages-to-st.patch \
    file://0109-FIO-toup-imx8mm_evk-define-default-dfu_alt_info-for-.patch \
    file://0110-FIO-extras-imx-always-define-CONFIG_SYS_MMC_ENV_DEV.patch \
    file://0111-FIO-toup-imx8mq_evk-define-default-dfu_alt_info-for-.patch \
    file://0112-FIO-internal-imx8mp_evk-disable-use-of-TCPC-for-SPL.patch \
    file://0113-FIO-internal-imx8mp_evk-runtime-detection-raw-sector.patch \
    file://0114-FIO-internal-imx8mp_evk-use-common-spl_mmc_get_uboot.patch \
    file://0115-FIO-internal-imx8m-set-the-fuses-definitions-common-.patch \
    file://0116-FIO-toup-ARM-imx8m-support-IMX8MP-in-imx8m_usb_power.patch \
    file://0117-FIO-toup-imx8mq_evk-define-default-dfu_alt_info-for-.patch \
    file://0118-FIO-extras-board-imx6ullevk-for-OP-TEE-lower-ram_siz.patch \
    file://0119-FIO-toup-mx6ullevk-Set-CONFIG_SYS_BOOTMAPSZ-to-the-m.patch \
    file://0120-FIO-toup-fit_image-use-sha256-algo-for-images-hash-s.patch \
    file://0121-FIO-toup-apalis-imx8-allow-dropping-CONFIG_CMD_USB-r.patch \
    file://0122-FIO-internal-imx-secondary_boot-enable-support-for-m.patch \
    file://0123-FIO-internal-arch-arm-mach-imx-runtime-image-offset-.patch \
    file://0124-FIO-internal-fastboot-fb_fsl-handle-secondary-boot-i.patch \
    file://0125-FIO-internal-imx-detect-boot0-boot1-partition-to-boo.patch \
    file://0126-FIO-extras-mx7ulp_com-force-board_ehci_usb_phy_mode-.patch \
    file://0128-FIO-toup-imx8-ahab-refactor-do_ahab_close-command.patch \
    file://0129-FIO-internal-misc-imx8-always-include-fuse-logic.patch \
    file://0130-FIO-extras-imx-mx6ul_14x14_evk-dont-include-default-.patch \
    file://0131-FIO-extras-board-imx6ul_14x14_evk-OP-TEE-lower-ram_s.patch \
    file://0132-FIO-internal-mx6-disable-fuses-and-of-system-setup-i.patch \
    file://0133-FIO-extras-imx-mx6ul_14x14_evk-add-board_fit_config_.patch \
    file://0134-FIO-extras-dts-imx6ul-14x14-evk-u-boot-drop-aliases-.patch \
    file://0135-FIO-internal-misc-include-misc-uclass-depending-on-K.patch \
    file://0137-FIO-internal-imx8-select-HAS_CAAM-only-if-OPTEE-is-n.patch \
    file://0138-FIO-internal-imx8qm-mek-select-FSL_CAAM-only-if-HAS_.patch \
    file://0139-FIO-internal-imx8-don-t-probe-caam-job-ring-driver.patch \
    file://0140-FIO-internal-arch-arm-dts-imx8mp-evk-enable-i2c5-bus.patch \
    file://0141-FIO-internal-board-imx8mp_evk-spl-enable-i2c5-bus.patch \
    file://0142-FIO-toup-ARM-dts-imx6-apalis-remove-stub-for-memory-.patch \
    file://0143-FIO-fromtree-mx7ulp_com-fix-incorrect-select-for-SPL.patch \
    file://0144-FIO-toup-spl-include-watchdog-drivers-if-SPL_HW_WATC.patch \
    file://0145-FIO-internal-imx-runtime-image-offset-detection-for-.patch \
    file://0146-FIO-toup-imx8mn_evk-define-default-dfu_alt_info-for-.patch \
    file://0147-FIO-internal-ARM-mach-imx-spl-add-support-of-imx8mn_.patch \
    file://0148-FIO-fromtree-i2c-fix-stack-buffer-overflow-vulnerabi.patch \
    file://0149-FIO-fromtree-fs-squashfs-sqfs_read-Prevent-arbitrary.patch \
    file://0150-FIO-fromtree-fs-squashfs-Use-kcalloc-when-relevant.patch \
    file://0151-FIO-fromtree-zlib-Port-fix-for-CVE-2018-25032-to-U-B.patch \
    file://0152-FIO-fromtree-net-nfs-Fix-CVE-2022-30767-old-CVE-2019.patch \
    file://0153-FIO-toup-usb-dwc3-Fix-renaming-SPL_USB_HOST_SUPPORT-.patch \
    file://0155-FIO-toup-imx-mx6-spl-reduce-BSS-size.patch \
    file://0156-FIO-squash-image-sig-fix-disabling-SHA1-with-FIT_SIG.patch \
    file://0157-FIO-toup-spl-crypto-fix-including-object-files-of-SH.patch \
    file://0158-FIO-toup-mmc-spl-select-SPL_BLK-for-SPL_DM_MMC.patch \
    file://0159-FIO-toimx-usb-imx-mx6-fix-building-ehci-mx6-driver.patch \
    file://0160-FIO-fromlist-riscv-Fix-build-against-binutils-2.38.patch \
    file://0161-FIO-internal-dfu-rollback-some-argument-checking.patch \
    file://0162-FIO-fromlist-drivers-tee-i2c-support-the-NXP-SE05x-p.patch \
    file://0163-FIO-tosquash-drivers-tee-i2c-fix-SE050-errata.patch \
    file://0164-FIO-internal-fiovb-simplify-code.patch \
    file://0165-FIO-squash-boot-image-sig-fix-using-disabled-SHA1.patch \
    file://0166-FIO-toup-arm-mach-imx-loose-enabling-FSL_CAAM.patch \
    file://0167-FIO-squash-drivers-tee-i2c-fix-format-arguments-size.patch \
    file://0168-Revert-FIO-internal-fiovb-simplify-code.patch \
    file://0169-FIO-internal-fiohab-remove-safeguard-for-incorrect-r.patch \
    file://0170-FIO-internal-imx-imx8m-spl_mmc_emmc_boot_partition-a.patch \
    file://0171-FIO-internal-ARM-dts-fsl-imx8qm-mek-u-boot-add-optee.patch \
    file://0225-FIO-tonxp-imx8qm_mek-don-t-re-define-SYS_MMC_ENV_DEV.patch \
    file://0226-FIO-toup-Revert-arm-imx-mx7-Move-CONFIG_OPTEE_TZDRAM.patch \
    file://0227-FIO-tonxp-arm-dts-imx6qdl-remove-stub-for-memory-lay.patch \
    file://0228-FIO-tosquash-imx8qm_mek-fix-build-issues-for-CONFIG_.patch \
    file://0229-FIO-totoradex-ARM-dts-fsl-imx8qm-apalis-adjust-usdhc.patch \
    file://0230-FIO-internal-ARM-dts-fsl-imx8qm-apalis-u-boot-add-op.patch \
    file://0231-FIO-tosquash-imx8-adjust-address-for-FIT-buffer.patch \
    file://0233-FIO-extra-bootcmd_mfg-start-USB-again.patch \
"
