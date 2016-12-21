#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
#include<cmath>
using namespace std;

#define PI 3.1415926535898

//点座標を型とする
typedef complex<double> P;


//許容誤差
#define EPS (1e-10)
//X Y座標
#define X real()
#define Y imag()

class Triangle {
    private:
    //三角形の3点の座標
    P a,b,c;
    //三角形の辺の長さ
    double edgeA, edgeB, edgeC;
    //三角形の角の大きさ
    double angleA, angleB, angleC;
    //余弦定理から3つの角度を求める
    double LawOfCosines(double a, double b, double c) {
        return acos((b*b+c*c-a*a)/(2.0*b*c));
    }
    //2つのdouble型が等しいか
    bool equal(double a,double b) {
        return (abs(a-b)<EPS)?true:false;
    }

    public:
    //コンストラクタ
    Triangle(P p1, P p2, P p3) {
        a=p1;
        b=p2;
        c=p3;
        edgeB=abs(c-a);
        edgeA=abs(b-c);
        edgeC=abs(a-b);
        angleA=LawOfCosines(edgeA, edgeB, edgeC);
        angleB=LawOfCosines(edgeB, edgeC, edgeA);
        angleC=LawOfCosines(edgeC, edgeA, edgeB);
    }

    double circumscribedCircleRadius() {//外接円の半径
        return (edgeA/sin(angleA)/2.0);
    }

    double circumscribedCircleX() {//外接円の中心X座標
        double A=sin(2.0*angleA);
        double B=sin(2.0*angleB);
        double C=sin(2.0*angleC);
        return ((a.X * A + b.X * B + c.X * C)/(A+B+C));
    }

    double circumscribedCircleY() {//外接円の中心Y座標
        double A=sin(2.0*angleA);
        double B=sin(2.0*angleB);
        double C=sin(2.0*angleC);
        return ((a.Y * A + b.Y * B + c.Y * C)/(A+B+C));
    }
};


int main(){
    int mod=1000000007;
    int n;
    double x1,y1,x2,y2,x3,y3;
    double r,xp,yp;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
        P a(x1,y1);
        P b(x2,y2);
        P c(x3,y3);
        Triangle Tr(a,b,c);
        xp=Tr.circumscribedCircleX();
        yp=Tr.circumscribedCircleY();
        r =Tr.circumscribedCircleRadius();

        //printf("%.10f %.10f %.10f\n",xp,yp,r);
        printf("%.3f %.3f %.3f\n",xp,yp,r);
    }

    return 0;
}
