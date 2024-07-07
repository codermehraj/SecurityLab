TASK 3.1: AES encryption using different modes

I openned a text file names task1.txt


>> Using AES128 CBC
openssl enc -aes-128-cbc -e -in task1.txt -out task1aes128cbc.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
openssl enc -aes-128-cbc -d -in task1aes128cbc.bin -out task1aes128cbcdecrypted.txt -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222

>> Using AES128 CFB
openssl enc -aes-128-cfb -e -in task1.txt -out task1aes128cfb.bin -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222
openssl enc -aes-128-cfb -d -in task1aes128cfb.bin -out task1aes128cfbdycrypted.txt -K 77942123545646274856abcbdcedaeab -iv 33355500033347349994444453555222

>> Using AES128 ECB
openssl enc -aes-128-ecb -e -in task1.txt -out task1aes128ecb.bin -K 77942123545646274856abcbdcedaeab
openssl enc -aes-128-ecb -d -in task1aes128ecb.bin -out task1aes128ecbdecrypted.txt -K 77942123545646274856abcbdcedaeab

To read the encrypted binary files I used ghex:
ghex task1aes128cbc.bin &
ghex task1aes128cfb.bin &
ghex task1aes128ecb.bin &
