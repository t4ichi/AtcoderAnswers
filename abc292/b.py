n,q = input().split()
n = int(n)
q = int(q)

player = [0] * (n+1)

for i in range(q):
    a,b = input().split()
    a = int(a)
    b = int(b)
    if(a == 1):
        player[b] = player[b] + 1
    if(a == 2):
        player[b] = player[b] + 2
    if(a == 3):
        if(player[b] >= 2):
            print("Yes")
        else:
            print("No")