from time import sleep

str = "Anish Roy"
n=""
for i in range(0, len(str)):
   for j in range(0, 128):
        print(n + chr(j))
        print(n)
        
        if(chr(j) == str[i]):
            print(str[i])
            n+= chr(j)
        sleep(0.025)
            
