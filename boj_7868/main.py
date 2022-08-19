p1, p2, p3, ii = map(int, input().split())

res = []

for i in range(60):
    a = p1 ** i
    for j in range(60):
        b = p2 ** j
        c = a*b
        res.append(c)
        for k in range(60):
            if(i+j+k > 60): break
            c *= p3
            res.append(c)
res.sort()

print(res[ii])