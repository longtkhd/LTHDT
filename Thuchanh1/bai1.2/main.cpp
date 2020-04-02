#include <bits/stdc++.h>
#define pi 3.14

using namespace std;

class hinhTron {
private:
    float r;
public:
    void nhap();
    void xuat();
    float P(){
    return 2*pi*r;

    };
    float S(){
      return pi*r*r;
    };
};
void hinhTron::nhap(){
    cout<<"nhap r:"<<endl;
    cin>>r;
}
void hinhTron::xuat(){
    cout<<"P=:"<<P()<<endl;
    cout<<"S=:"<<S()<<endl;
}
int main()
{
   hinhTron p;
   p.nhap();
   p.xuat();
}
