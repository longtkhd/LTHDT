#include <bits/stdc++.h>

using namespace std;
class VECTO {
    int x,y;
public:
    VECTO(){
    x=y=0;
    }
    VECTO(int X,int Y){
        x= X;
        y = Y;
    }

    friend istream& operator>>(istream& in,VECTO &mimi);
    friend ostream& operator<<(ostream& out,VECTO mimi);
    VECTO operator+(VECTO mimi){
        VECTO tg;
        tg.x = x + mimi.x;
        tg.y = y + mimi.y;
        return tg;
    }
    VECTO operator-(VECTO mimi){
        VECTO tg;
        tg.x = x - mimi.x;
        tg.y = y - mimi.y;
        return tg;
    }
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
    cout<<"nhap toa do A: "<<endl;
    cin>>A;
    cout<<"nhap toa do B: "<<endl;
    cin>>B;
    cout<<A<<"vector A"<<endl;
    cout<<B<<"vector B"<<endl;

    cout<<"tong 2 vector A va B :"<<A+B<<endl;
     cout<<"hieu 2 vector A va B :"<<A-B<<endl;

}
