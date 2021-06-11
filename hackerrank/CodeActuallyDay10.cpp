m = int(input())
for p in range(m):
    n = int(input())
    if n==0:
        print("0")
    else:
        st = list(input())
        c = 0
        for i in range(n):
            t = n
            while len(st[i:t]) != len(set(st[i:t])):
                t -= 1
            tc = len(set(st[i:t]))
            if tc >= c:
                c = tc
        print(c)
