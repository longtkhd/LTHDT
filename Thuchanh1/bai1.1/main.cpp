#include <bits/stdc++.h>

using namespace std;

class hinhThang
{
private :
    float m,n,h;
public :
    void nhap();
    float S()
    {
        return ((m+n)*h)/2;
    };
    void xuat();

};
void hinhThang::nhap()
{
    cout<<"nhap m,n,h:"<<endl;
    cin>>m>>n>>h;
}
void hinhThang::xuat()
{
    cout<<"S=:"<<S()<<endl;
}

int main()
{
    hinhThang p;
    p.nhap();
    p.xuat();
}
