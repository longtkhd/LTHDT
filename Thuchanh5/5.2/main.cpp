#include <bits/stdc++.h>

using namespace std;
class PTB2{
    float a,b,c;
public:
    void nhap(){
    cout<<"nhap a:"; cin>>a;
    cout<<"nhap b:"; cin>>b;
    cout<<"nhap c:"; cin>>c;
    }
    void xuat(){
        cout<<"pt: "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0"<<endl;

    }
    PTB2(){
        a=b=c=0;
    }
    PTB2(float x, float y,float z){
    a=x;
    b=y;
    c=z;
    }
    float GIAI(){
        if(a==0){
            cout<<"pt khong phai pt b2 ";
        }
        else {
            float delta = b * b - 4 * a*c;
            if(delta<0){
                cout<<"pt da cho vo nghiem "<<endl;
            }else if(delta==0){
                cout<<"pt co nghiem kep la:"<<-b/(2*a)<<endl;
            }else{
                cout<<"pt  co 2 nghiem pb la:"<<(-b + sqrt(delta))/(2*a)<<"||"<<(-b - sqrt(delta))/(2*a)<<endl;
            }
        }
    }

};

int main()
{
    PTB2 P(3,6,-3);
    P.xuat();
    P.GIAI();

    PTB2 Q;
    Q.nhap();
    Q.xuat();
    Q.GIAI();
}
