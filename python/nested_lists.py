a=[]
n=int(input(""))
for i in range(0,n):
    name=input("")
    value=float(input(""))
    ele=[name,value]
    a.append(ele)
values=[]
names=[]
for i in range(0,n):
    values.append(a[i][1])
    names.append(a[i][0])
max1=max(values)
min1=min(values)
for i in range(0,n):
    if(values[i]==min1):
        values[i]=max1+1
min1=min(values)
for i in range(0,n):
    if(values[n-1-i]==min1):
        if(names[n-1-i]=="Test3"):
            print("Test2")
        elif(names[n-1-i]=="Test2"):
            print("Test3")
        else:
            print(names[n-1-i])

