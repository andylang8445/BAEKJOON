a = []
sum = 0
for _ in range(3):
    tmp = int(input())
    sum += tmp
    a.append(tmp)
if(sum != 180):
    print("Error")
else:
    a.sort()
    if(a[0] == a[1] == a[2]):
        print("Equilateral")
    elif(a[0] == a[1] or a[1] == a[2]):
        print("Isosceles")
    else:
        print("Scalene")
