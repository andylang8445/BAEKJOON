N = int(input())
user = []
ttmp = ((input().split(" ")))
tmp = []
for i in range(N):
    tmp.append(int(ttmp[i]))
dic = {}
for i in range(N):
    user.append(tmp[i])
tmp = list(set(tmp))
tmp.sort()
for i in range(len(tmp)):
    dic[tmp[i]] = i
for i in range(N):
    print(str(dic[(user[i])]), end=" ")