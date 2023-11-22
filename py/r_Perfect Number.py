a = int(input())
arr = []
for i in range (1, int(a/2 + 1)):
    if a % i == 0:
        arr.append(i)
if sum(arr) == a:
    print("Yes")
else:
    print("No")