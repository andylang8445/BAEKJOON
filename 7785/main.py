n = int(input())
s = set()
for _ in range(n):
    tmp = input().split(" ")
    if tmp[1] == "enter":
        s.add(tmp[0])
    elif tmp[0] in s:
        s.remove(tmp[0])
for i in reversed(list(s)):
    print(i)
