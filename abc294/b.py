h,w = map(int,input().split())
a = [list(map(int,input().split())) for _ in range(h)]

for i in range(h):
    for j in range(w):
        if(a[i][j] == 0):
            print('.',end='')
        else:
            print(chr(ord('A') + a[i][j] - 1),end='')
    print()