TASK 3.2: ENCRYPTION MODE - ECB VS CBC

I downloaded the logo of SWE Society and converted it to bmp file. The name of the file is swe.bmp

>> USING AES128-ECB

openssl enc -aes-128-ecb -e -in swe.bmp -out encryptedLogo.bmp -K 77942123545646274856abcbdcedaeab
ghex swe.bmp &
goto byte 54
copy
ghex encryptedLogo.bmp &
goto byte 54
find and replace
see image in viewer

>> USING AES128-CBC
openssl enc -aes-128-cbc -e -in swe.bmp -out encryptedImageCBC.bmp -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
ghex swe.bmp &
goto byte 54
copy
ghex encryptedImageCBC.bmp &
find and replace
see image in viewer
