n = int(input())

num = [0] * (n+1)

for a in range(1,n+1):
    for b in range(1,n+1):
        if(a*b > n): break
        num[a*b] += 1
ans = 0
for i in range(1,n):
    ans += num[i] * num[n-i]
print(ans)