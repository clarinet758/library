#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/

struct UnionFind {
    vector<int> data;
    UnionFind(int size) : data(size, -1) {}
    bool unite(int x, int y) {
        x=root(x), y=root(y);
        if (x!=y) {
            if (data[y]<data[x]) {
                swap(x, y);
            }
            data[x]+=data[y], data[y]=x;
        }
        return x!=y;
    }

    bool find(int x, int y) {
        return root(x)==root(y);
    }

    int root(int x) {
        return data[x]<0 ? x : data[x]=root(data[x]);
    }

    int size(int x) {
        return -data[root(x)];
    }
};


int main(){
    int mod=1000000007;
    int n,q;
    scanf("%d %d",&n,&q);
    UnionFind uf(n);
    for (int i=0;i<q;i++) {
        int p,a,b;
        scanf("%d %d %d",&p,&a,&b);
        if (p!=0) printf (uf.find(a,b) ? "Yes\n" : "No\n");
        else uf.unite(a,b);
    }
    return 0;
}
