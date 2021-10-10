import math
b=int(input())
aa=b
a=[]
tmp=2
while b>1:
    if b%tmp==0:
        a.append(tmp)
        b/=tmp
    else:
        tmp+=1
for i in a:
    print(i)

