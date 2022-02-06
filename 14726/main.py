def luhn(array):
    numarray = list()
    digit = len(array)
    # print("Length: ", digit, " Digits")
    for i in range(0, digit):
        numarray.append(int(arr[i]))
    tmp = digit - 2
    summation = 0
    while tmp >= 0:
        numarray[tmp] *= 2
        if numarray[tmp] >= 10:
            numarray[tmp] %= 10
            numarray[tmp] += 1
        tmp -= 2
    # print(numarray)
    for i in range(0, digit):
        summation += numarray[i]
    if summation % 10 == 0:
        return True
    else:
        return False

if __name__ == '__main__':
    number=int(input())
    for i in range(0, number):
        string = input()
        string = string.replace(" ", "")
        arr = list(string)
        if luhn(arr):
            print("T")
        else:
            print("F")