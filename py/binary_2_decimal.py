bin = int(input())
dec = 0
i = 0
while bin != 0:
    dec += (bin % 10) * (2 ** i)
    bin = bin // 10
    i += 1
print(dec)