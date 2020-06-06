a=[]
n=int(input(""))
a = list(map(int,input("").strip().split()))[:n]
max1=max(a)
min1=min(a)
for i in range(0,n):
    if(a[i]==max1):
        a[i]=min1
print(max(a))        
