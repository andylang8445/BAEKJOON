import sys
n = int(input())
so = []
for i in range(n):
    so.append(list(map(int, input().split())))
so.sort(key=lambda x: (x[0], x[1]))
for i in so:
    print(i[0], i[1])
