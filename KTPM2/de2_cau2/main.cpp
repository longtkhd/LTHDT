#include <bits/stdc++.h>

using namespace std;
class THOIGIAN{
    int gio,phut,giay;
public:
    THOIGIAN(){
        gio=phut=giay=1;
    }
    THOIGIAN(int a,int b,int c){
        gio =a;
        phut =b;
        giay =c;
    }

    THOIGIAN operator-(THOIGIAN mimi){
        THOIGIAN tg;
        tg.gio = gio - tg.gio;
        tg.phut = phut - tg.phut;
        tg.giay = giay - tg.giay;
        return tg;
    }

    friend istream& operator>>(istream& in,THOIGIAN &mimi);
    friend ostream& operator<<(ostream& out,THOIGIAN mimi);
};

istream& operator>>(istream& in,THOIGIAN &mimi){
    cout<<"nhap gio: ";
    in>>mimi.gio;
    cout<<"nhap phut ";
    in>>mimi.phut;
    cout<<"nhap giay ";
    in>>mimi.giay;
}

ostream& operator<<(ostream& out,THOIGIAN mimi){
    out<<mimi.gio<<"gio"<<mimi.phut<<"phut"<<mimi.giay<<"giay"<<endl;
}
int main()
{
    THOIGIAN a,b(1,2,3);
    cout<<"nhap a "<<endl;
    cin>>a;
    cout<<"hieu hai thoi gian la: "<<a - b<<endl;

}
