#include <bits/stdc++.h>

using namespace std;
class PHANSO {
    float tu,mau;
public:
    PHANSO(){
        tu=mau=1;
    }
    PHANSO(float TU,float MAU){
        tu = TU;
        mau = MAU;
    }
    friend istream& operator>>(istream& in,PHANSO &mimi);
    friend ostream& operator<<(ostream& out,PHANSO mimi);

    PHANSO operator/(PHANSO mimi){
        PHANSO tg;
        tg.tu = tu*mimi.mau;
        tg.mau = mau*mimi.tu;
        return tg;
    }
    PHANSO operator+(PHANSO mimi){
        PHANSO tg;
        tg.tu = (tu*mimi.mau + mau*mimi.tu);
        tg.mau = mau*mimi.mau;
        return tg;

    }

    double operator-(){
            return (float)tu/mau;
    }; //hien thi phan so

};

istream& operator>>(istream& in,PHANSO &mimi){
        cout<<"nhap tu :";
        in>>mimi.tu;
        cout<<"nhap mau: ";
        in>>mimi.mau;
}

ostream& operator<<(ostream& out,PHANSO mimi){
        out<<mimi.tu<<"/"<<mimi.mau<<endl;
}


int main()
{
    PHANSO a,b;
    cout<<"nhap phan so 1:"<<endl;
    cin>>a;
    cout<<"phan so 1 la:"<<a<<endl;
    cout<<"nhap phan so 2:"<<endl;
    cin>>b;
    cout<<"phan so 2 la :"<<b<<endl;

    cout<<" a/b : c/d :  "<<a/b<<-(a/b)<<endl;
    cout<<"a/b + c/d :  "<<a+b<<-(a+b)<<endl;




}
