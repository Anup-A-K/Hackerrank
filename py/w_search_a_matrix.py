n,k = map(int, input().split())
matrix = []
for i in range(n):
    matrix.append(list(map(int, input().split())))
a = 0
for i in range(n):
    for j in range(n):
        if a == 1:
            break
        if matrix[i][j] == k:
            print("Element found at ("+str(i)+", "+str(j)+") position")
            a = 1
            break
if a == 0:
    print("Not found")