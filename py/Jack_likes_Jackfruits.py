k, j, n = map(int, input().split())
total = 0
for i in range(1, n+1):
    total += k*i;
print (total - j if total > j else 0)