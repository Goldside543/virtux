![Screenshot_2024-07-07_9 15 00_PM-removebg-preview](https://github.com/Goldside543/virtux/assets/170671455/12e4d46a-20a1-4400-8fe7-377b39ab46d6)
# Virtux
A version of the Linux kernel I made to really support virtualization! Files coming soon.
# **THIS KERNEL WILL ONLY FUNCTION ON HARDWARE THAT SUPPORTS VIRTUALIZATION.**
To see if your hardware supports Virtux, dig around in your BIOS/UEFI to find a "virtualization" option. If none exist, your hardware does not support Virtux.
# To install...
* First, download the latest `bzImage` in the releases.
* Second, run `cp /directory/containing/bzImage /boot/vmlinuz-Virtux`
* Third, create an "initial ramdisk", I prefer using dracut. `sudo dracut --xz /boot/initramfs-Virtux.img`
* Fourth, update your bootloader, for GRUB, `sudo grub-mkconfig -o /boot/grub/grub.cfg`
* Fifth, reboot your system and enter your bootloader.
* Sixth, edit the bootloader entry for Virtux, and delete `gfxpayload=keep` and `quiet`
* Finally, boot Virtux and voila, faster VMs, and from my experience, even games!

(Note: Step 6 will need to be repeated every boot)
