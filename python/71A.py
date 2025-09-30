n = int(input())
res = []
for i in range(n):
    s = input()
    if len(s) > 10:
        res.append(s[0] + str(len(s) - 2) + s[-1])
    else:
        res.append(s)
 
print(*res, sep='\n')