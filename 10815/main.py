N = int(input())
have = []
inputval = set(input().split(" "))
for i in inputval:
    have.append(int(i))
have = list(set(have))
have.sort()
M = int(input())
inputval = (input().split(" "))
# print(inputval)

def bin_search(l, r, target):
    # print(have[l:r+1], "l: ", l, ", r:", r, ", searching for ", target)
    if l < 0 or r>len(have):
        return 0
    if l>r:
        return 0
    elif l == r:
        if have[l] == target:
            return 1
        else:
            return 0
    mid = int((l+r)/2)
    if mid > len(have):
        return 0
    if have[mid] == target:
        return 1
    if have[mid] > target:
        return bin_search(l, mid-1, target)
    else:
        return bin_search(mid+1, r, target)
for i in inputval:
    print(bin_search(0, len(have),int(i)), end = " ")