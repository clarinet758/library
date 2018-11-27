#include<bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;
const int INF=100000000;
Matrix d;

void warshall_floyd(int n) {
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            for (int k=0;k<n;k++)
                d[j][k]=min(d[j][k], d[j][i]+d[i][k]);
    }

int main(){
    int mod=1000000007;
    int n,m,x=0,ans=INF;
    scanf("%d %d",&n,&m);
    d=Matrix(n, vector<int>(n,INF));
    for (int i=0;i<n;i++) d[i][i]=0;
    for (int i=0;i<m;i++) {
        int from,to,cost;
        scanf("%d %d %d",&from,&to,&cost);
        d[from][to]=cost; //0-index or 1-index
    }
    warshall_floyd(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && d[i][j] != INF)
                cout << i << "から" << j << "へのコスト: " << d[i][j] << endl;
        }
    }
    return 0;
/** sample inpput
4 6
0 1 10
0 3 100
1 3 1000
2 1 1
2 3 10000
3 0 5
**/
}
