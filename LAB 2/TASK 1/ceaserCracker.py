cipherText = 'odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo'
alphabets = 'abcdefghijklmnopqrstuvwxyz'

for key in range(len(alphabets)):
   
   decrypted = ''
   
   for ch in cipherText:
      
      if ch in alphabets:
         
         ascii = alphabets.find(ch)
         ascii = ascii - key
         
         if ascii < 0:
            ascii = ascii + len(alphabets)
         
         decrypted = decrypted + alphabets[ascii]
      
      else:
         decrypted = decrypted + ch
   
   print('FOR KEY = ', key, ': ', decrypted)