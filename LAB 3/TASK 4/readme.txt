TASK 3.4:
ECB = 	PADDING YES
CBC =   PADDING YES
CFB =   PADDING NO
OFB =   PADDING NO

create a text smaple.txt

openssl enc -aes-128-ecb -e -in sample.txt -out ecb128encrypted.bin -K 77942123545646274856abcbdcedaeab
ghex ecb128encrypted.bin &
ghex sample.txt &
this one is larger after endryption meaning it has padding

openssl enc -aes-128-cbc -e -in sample.txt -out cbc128encrypted.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
ghex cbc128encrypted.bin &
ghex sample.txt &
this one is larger after endryption meaning it has padding

openssl enc -aria-128-cfb8 -e -in sample.txt -out cfb128encrypted.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
ghex cfb128encrypted.bin &
ghex sample.txt &
this one is same sized after endryption meaning it do not have padding (stream)

openssl enc -aria-128-ofb -e -in sample.txt -out ofb128encrypted.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
ghex ofb128encrypted.bin &
ghex sample.txt &
this one is same sized after endryption meaning it do not have padding (stream)
