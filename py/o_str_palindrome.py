count = 0
for i in range(int(input())):
    s = input()
    if s == s[::-1]:
        count = count + len(s)
print(count)