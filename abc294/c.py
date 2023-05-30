n,m = map(int,input().split())

a = list(map(int,input().split()))
b = list(map(int,input().split()))

c = a + b
c.sort()

ans_a = []
ans_b = []
set_a = set(a)

for i in range(n+m):
    if(c[i] in set_a):
        ans_a.append(i+1)
    else:
        ans_b.append(i+1)

print(*ans_a)
print(*ans_b)