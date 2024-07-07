hash1 = "f965345a146ee5f09984afc05f98b3f25a5086ea6ffbf6efb9a603ff8f2c44aa"
hash2 = "0be68ac4be378c41126836087667298f69b1915f80309e6c142ea4b7d15d5296"

pointer = 0
numOfMatched = 0
for digit in hash1:
    if digit==hash2[pointer]:
        numOfMatched = numOfMatched + 1
    pointer = pointer + 1
    
print("Number of Matched : " , numOfMatched)

