#include <bits/stdc++.h>

using namespace std;

class NSX
{
    int Mansx;
    string Tennsx, Dcnsx;
public:
    void nhap()
    {
        cout<<"nhap Mansx"<<endl;
        cin>>Mansx;
        cout<<"nhap Tennsx"<<endl;
        fflush(stdin);
        getline(cin,Tennsx);
        cout<<"nhap Dcnsx"<<endl;
        fflush(stdin);
        getline(cin,Dcnsx);
    }
    void xuat()
    {
        cout<<"Mansx"<<" "<<Mansx<<endl;
        cout<<"Tennsx"<<" "<<Tennsx<<endl;
        cout<<"Dcnsx"<<" "<<Dcnsx<<endl;

    }

};
class Hang
{
    int Mahang;
    string Tenhang;
    NSX x;
public:
    void nhap()
    {
        cout<<"nhap ma hang"<<endl;
        cin>>Mahang;
        cout<<"nhap ten hang"<<endl;
        fflush(stdin);
        getline(cin,Tenhang);
        x.nhap();
    }
    void xuat()
    {
        cout<<"ma hang:"<<" "<<Mahang<<endl;
        cout<<"ten hang:"<<" "<<Tenhang<<endl;
        x.xuat();
    }



};

int main()
{
    Hang a;
    a.nhap();
    a.xuat();

}
