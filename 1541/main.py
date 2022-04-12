uinput = input()
total = 0
initial = True
sub = ""
state = ''
tmp = 0
for i in range(len(uinput)):
    if initial:
        if '0' <= uinput[i] <= '9':
            sub += uinput[i]
        else:
            total = int(sub)
            sub = ""
            initial = False
            state = uinput[i]
    elif state == '+':
        if uinput[i] >= '0' and uinput <= '9':
            sub += uinput[i]
        else:
            total += int(sub)
            sub = ""
            state = uinput[i]
    elif state == '-':
        if uinput[i] >= '0' and uinput <= '9':
            sub += uinput[i]
        else:
            tmp += int(sub)
            sub = ""
            if uinput[i] == '-':
                total -= tmp
                tmp = 0
if sub != "":
    if state == '-':
        total -= int(sub)
        total -= tmp
    else:
        total += int(sub)

print(total)