import math

N = int(input())

count = 0
result = []

for _ in range(N):
    a, b = map(int, input().split())
    distance = b - a

    num = math.floor(math.sqrt(distance))
    num_jegob = num**2

    if distance == num_jegob:
        count = (num*2)-1

    elif num_jegob < distance <= num_jegob + num:
        count = (num*2)

    elif (num_jegob + num) < distance:
        count = (num*2) + 1

    elif distance < 4:
        count = distance
    result.append(count)



for x in result:
    print(x)
