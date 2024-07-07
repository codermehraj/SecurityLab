TASK 3.6: Keyed hash and HMAC

create a text file nammed sample.txt

openssl dgst -sha1 -hmac "Mehraj2019831074" sample.txt
output: 53f99c47ddfacc642529b57166d540d1f6b80c4a
openssl dgst -md5 -hmac "Mehraj2019831074" sample.txt
output: 74ec670f0ca8f1d365e5ac258a79849a
openssl dgst -sha256 -hmac "Mehraj2019831074" sample.txt
output: c9144b756421e3c9e7410e19b6e1a79b256fef7795a576672819d1d267210a3e
