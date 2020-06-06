n = int(input())
sum=0
if(n<10):
    for i in range(1,n+1):
        sum=sum*10+i 
if(n>=10 and n<100):
    for i in range(1,10):
        sum=sum*10+i
    for i in range(10,n+1):
        sum=sum*100+i    
if(n>=100):       
    for i in range(1,10):
        sum=sum*10+i
    for i in range(10,100):
        sum=sum*100+i
    for i in range(100,n+1):
        sum=sum*1000+i     

print(sum)    
