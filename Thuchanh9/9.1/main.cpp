#include <bits/stdc++.h>

using namespace std;

class VECTO{
    int x,y;
public:
    friend istream& operator>>(istream& in,VECTO &mimi);
    friend ostream& operator<<(ostream& out,VECTO mimi);
    VECTO operator+(VECTO mimi){
        VECTO tg;
        tg.x = x+mimi.x;
        tg.y = y + mimi.y;
        return tg;
    };
    VECTO operator-(VECTO mimi){
        VECTO tg;
        tg.x = x - mimi.x;
        tg.y = y - mimi.y;
        return tg;
    };
};

istream& operator>>(istream& in,VECTO &mimi){
    cout<<"nhap x: ";
    in>>mimi.x;
    cout<<"nhap y: ";
    in>>mimi.y;
}
ostream& operator<<(ostream& out,VECTO mimi){
    out<<"("<<mimi.x<<","<<mimi.y<<")";
}


int main()
{
    VECTO A,B;
    cout<<"nhap diem A: "<<endl;
    cin>>A;
    cout<<"nhap diem B: "<<endl;
    cin>>B;


    cout<<"A+B: "<<A+B<<endl;
    cout<<"A-B: "<<A-B<<endl;
}
