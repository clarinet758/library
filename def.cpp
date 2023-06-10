#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define per(i,n)  for(int i=n-1;i>=0;--i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define sl1(a)  scanf("%lld",&a)
#define sl2(a,b)  scanf("%lld %lld",&a,&b)
#define sl3(a,b,c)  scanf("%lld %lld %lld",&a,&b,&c)
#define PI 3.1415926535897932
#define print(a) cout << a << endl
#define pp puts("")

#define Yes printf("Yes\n")
#define No printf("No\n")
void yneso(int a) {if(a) cout << Yes; else cout << No;}

//int64_t はatcoderメリット不明のため long long
typedef long long ll;
//#define ll int64_t

//
int souwa(int a) {return (1+a)*a/2;}
int lcm(int a,int b) { return a*b/__gcd(a,b); }
ll gcdll(ll a, ll b) { if(b==0ll) return a; else return gcdll(b, a%b); }
ll lcmll(ll a,ll b) { return (a/gcdll(a,b)*b); }
ll maxll(ll a,ll b) {if(a>b){return a;}else{return b;}}
ll minll(ll a,ll b) {if(a<b){return a;}else{return b;}}

double tilt(int x1,int y1,int x2,int y2) {return (1.0*y2-1.0*y1)/(1.0*x2-1.0*x1);}
double tri(int xa,int ya,int xb,int yb,int xc,int yc) {return (1.0*xa-1.0*xc)*(1.0*yb-1.0*yc)-(1.0*xb-1.0*xc)*(1.0*ya-1.0*yc);}
bool sankaku(int a,int b,int c) {vector <int> t={a,b,c};sort(t.begin(),t.end()); return t.at(0)+t.at(1)>t.at(2);};

/** sort(ar.begin(),ar.end())
 * vector<vector<int>> a(5,vector<int>)
    int sum=accumulate(ar.begin(),ar.end(),0); 
    do {// do内部で作られた順列に対して必要な処理を行う
        //必ず事前にソートしておくこと、配列の中身を見ていて？辞書順に次のもの次のもの作成するのでソートしておかないと列挙が漏れる
        // cout << w.at(0) << w.at(1) << w.at(2) << endl;
    } while (next_permutation(w.begin(),w.end()));  //ex. vector <int> w= {1,2,3}; **/

// 何か貼るときはココから下に

int main(){
    int mod=1e9+7;
    int n,k,x,y,z,cnt=0,ans=0;
    cin >> n;
    //cin >> m;
    string s,t;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    //print(ans);
    return 0;
}