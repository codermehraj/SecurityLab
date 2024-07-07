TASK 3.3: ECRIPTION MODE : CORRUPTED CYPHERTEXT

create a text file sample.txt

CBC: 
openssl enc -aes-128-cbc -e -in sample.txt -out encryptedAES128CBC.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
ghex encryptedAES128CBC.bin &
go to 30th bit
change the HEX value
openssl enc -aes-128-cbc -d -in encryptedAES128CBC.bin -out decryptedAES128CBC.txt -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
check the file

ECB:
openssl enc -aes-128-ecb -e -in sample.txt -out encryptedAES128ECB.bin -K 77942123545646274856abcbdcedaeab
ghex encryptedAES128ECB.bin &
go to 30th bit
change the HEX value
openssl enc -aes-128-ecb -d -in encryptedAES128ECB.bin -out decryptedAES128ECB.txt -K 77942123545646274856abcbdcedaeab
check the file

CFB:
openssl enc -aria-128-cfb -e -in sample.txt -out encryptedAES128CFB.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
ghex encryptedAES128CFB.bin &
go to 30th bit
change the HEX value
openssl enc -aria-128-cfb -d -in encryptedAES128CFB.bin -out decryptedAES128CFB.txt -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
check the file

OFB:
openssl enc -aria-128-ofb -e -in sample.txt -out encryptedAES128OFB.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
ghex encryptedAES128OFB.bin &
go to 30th bit
change the HEX value
openssl enc -aria-128-ofb -d -in encryptedAES128OFB.bin -out decryptedAES128OFB.txt -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
check the file
THIS OFB HAS THE BEST RESULTS
