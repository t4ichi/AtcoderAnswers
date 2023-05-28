class UnionFind():
    # 初期化
    def __init__(self, n):
        self.par = [-1] * n
        self.rank = [0] * n
        self.siz = [1] * n

    # 根を求める
    def root(self, x):
        if self.par[x] == -1: return x # x が根の場合は x を返す
        else:
          self.par[x] = self.root(self.par[x]) # 経路圧縮
          return self.par[x]

    # x と y が同じグループに属するか (根が一致するか)
    def issame(self, x, y):
        return self.root(x) == self.root(y)

    # x を含むグループと y を含むグループを併合する
    def unite(self, x, y):
        # x 側と y 側の根を取得する
        rx = self.root(x)
        ry = self.root(y)
        if rx == ry: return False # すでに同じグループのときは何もしない
        # union by rank
        if self.rank[rx] < self.rank[ry]: # ry 側の rank が小さくなるようにする
            rx, ry = ry, rx
        self.par[ry] = rx # ry を rx の子とする
        if self.rank[rx] == self.rank[ry]: # rx 側の rank を調整する
            self.rank[rx] += 1
        self.siz[rx] += self.siz[ry] # rx 側の siz を調整する
        return True
    
    # x を含む根付き木のサイズを求める
    def size(self, x):
        return self.siz[self.root(x)]
    
n,m = map(int,input().split())

u = [0] * m
v = [0] * m
for i in range(m):
    a,b = map(int,input().split())
    a-=1
    b-=1
    u[i] = a
    v[i] = b

uf = UnionFind(n)
for i in range(m):
    uf.unite(u[i],v[i])

cnt_v = [0] * n
cnt_e = [0] * n

for i in range(n):
    cnt_v[uf.root(i)] += 1

for i in range(m):
    cnt_e[uf.root(u[i])] += 1

if(cnt_e == cnt_v):
    print("Yes")
else:
    print("No")