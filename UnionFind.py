#!/usr/bin/env python
# -*- coding: UTF-8 -*-

class UnionFind:
    def __init__(self, size):
        self.rank=[0]*size
        self.par =range(size)
        self.grp =size

    def find(self, x):
        if x==self.par[x]: return x

        self.par[x]=self.find(self.par[x])
        return self.par[x]

    def same(self, x, y): #2つの頂点が同じグループであるかを判定する
        return self.find(x)==self.find(y)

    def unite(self, x, y): #辺で接続されている2つの頂点を投げて統合する
        x,y=self.find(x),self.find(y)
        if x==y:
            return

        self.grp-=1
        if self.rank[x]<self.rank[y]:
            self.par[x]=y
        else:
            self.par[y]=x
            if self.rank[x]==self.rank[y]:
                self.rank[x]+=1

    def group_num(self):
        return self.grp


# 頂点数がn個  クエリがq件
n,q=map(int,raw_input().split())

# 頂点数nで初期化
uf=UnionFind(n)

# q==0 で頂点a,bを結合する
# 0以外で同じグループか判定する
for i in range(q):
    p,a,b=map(int,raw_input().split())
    if p==0:
        uf.unite(a,b)
    else:
        print 'Yes' if uf.same(a,b) else 'No'
