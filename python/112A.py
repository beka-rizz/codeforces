n = input().lower()
m = input().lower()
res = 0
 
for i in range(len(n)):
    if n[i] > m[i]:
        res = 1
        break
    elif n[i] < m[i]:
        res = -1
        break
 
print(res)