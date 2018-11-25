#include<bits/stdc++.h>
using namespace std;
//quote from
//http://drken1215.hatenablog.com/entry/2018/06/08/210000
 
const int MAX=510000;
const int MOD=1000000007;
 
long long fac[MAX], finv[MAX], inv[MAX];

//前処理 
void COMinit() {
    fac[0]=fac[1]=1;
    finv[0]=finv[1]=1;
    inv[1]=1;
    for (int i=2;i<MAX;i++) {
        fac[i]=fac[i-1]*i%MOD;
        inv[i]=MOD-inv[MOD%i]*(MOD/i)%MOD;
        finv[i]=finv[i-1]*inv[i]%MOD;
    }
}
//二項係数計算
long long COM(int n,int k) {
    if (n<k) return 0;
    if (n<0 || k<0) return 0;
    return fac[n]*(finv[k]*finv[n-k]%MOD)%MOD;
}
int main(){
//前処理
    COMinit();
    int w,h,ans=0;
    scanf("%d %d",&w,&h);
    ans=COM(h+w-2,h-1); //nCk n,kいずれもMOD以下想定のはず
    printf("%d\n",ans);
    return 0;
}
