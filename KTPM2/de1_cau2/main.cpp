#include <bits/stdc++.h>

using namespace std;
class DIEM
{
    int x,y,z;
public:
    DIEM(int X,int Y,int Z)
    {
        x=X;
        y=Y;
        z=Z;

    }

    DIEM()
    {
        x=y=z=1;
    }
    DIEM operator+ (DIEM a)
    {
        return DIEM(x + a.x, y + a.y, z + a.z);
    }

    friend ostream &operator<<(ostream &out,DIEM a);
    friend istream& operator>>(istream &in,DIEM &a);


};

ostream& operator<<(ostream& out,DIEM a){
out<<a.x<<"-"<<a.y<<"-"<<a.z;
}

 istream& operator>>(istream &in,DIEM &a)
    {
        cout<<"nhap x: ";
        in>>a.x;
        cout<<"nhap y: ";
        in>>a.y;
        cout<<"nhap z: ";
        in>>a.z;

    }


int main()
{
    DIEM a,b(2,3,4);
    cin>>a;
    cout<<"diem a la:"<<a;
    cout<<"diem b la:"<<b;

    DIEM c = a+b;
    cout<<"tong 2 diem la:"<<c;





}
