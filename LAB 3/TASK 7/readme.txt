TASK 3.7:

create a text file nammed sample.txt

create a prgram for counting hash match nammed hashMatchCount.py

FOR MD5:
openssl dgst -md5 -hmac "Mehraj2019831074" sample.txt
output: 23566c525240bb80668939455bdd21ae
ghex sample.txt &
flip a bit
openssl dgst -md5 -hmac "Mehraj2019831074" sample.txt
output:c0ce651211c472a3549bbb8ae5b34529
match = 2


update the hashMatchCount.py :

hash1 = "23566c525240bb80668939455bdd21ae"
hash2 = "c0ce651211c472a3549bbb8ae5b34529"

pointer = 0
numOfMatched = 0
for digit in hash1:
    if digit==hash2[pointer]:
        numOfMatched = numOfMatched + 1
    pointer = pointer + 1
    
print("Number of Mismatch : " + numOfMatched)


FOR SHA256:
update the text file text.txt to the previous main content
openssl dgst -sha256 -hmac "Mehraj2019831074" text.txt
output: 923b829a244a667348611ffe93016ddf798224b71a0ad6c650e68f9e10cd1c6e
ghex text.txt &
flip a bit
openssl dgst -sha256 -hmac "Mehraj2019831074" text.txt
output: 5f4a04044aa5e14da6887551c00326cac4abba24355c076c38fb9f8dd6151e8f
match = 0

update the hashMatchCount.py :

hash1 = "f965345a146ee5f09984afc05f98b3f25a5086ea6ffbf6efb9a603ff8f2c44aa"
hash2 = "0be68ac4be378c41126836087667298f69b1915f80309e6c142ea4b7d15d5296"

pointer = 0
numOfMatched = 0
for digit in hash1:
    if digit==hash2[pointer]:
        numOfMatched = numOfMatched + 1
    pointer = pointer + 1
    
print("Number of Matched : " , numOfMatched)

