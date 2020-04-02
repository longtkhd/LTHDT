#include <bits/stdc++.h>

using namespace std;
class HANG
{

    int Mahang,Dongia;
    string Tenhang;
public:
    void nhap()
    {
        cout<<"nhap Mahang ";
        cin>>Mahang;
        cout<<"Ten Hang ";
        fflush(stdin);
        getline(cin,Tenhang);
        cout<<"nhap Don gia :";
        cin>>Dongia;
    }
    void xuat()
    {
        cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Dongia<<endl;
    }
};
class PHIEU
{
    int Maphieu;
    HANG x[100];
    int n;

public:
    void nhap()
    {
        cout<<"nhap ma phieu";
        cin>>Maphieu;

        cout<<"nhap n:"<<endl;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            x[i].nhap();
        }

    }
    void xuat ()
    {
        cout<<"ma phieu:"<<endl;
        cout<<Maphieu<<endl;

        cout<<setw(15)<<"Ma hang "<<setw(15)<<"Ten Hang "<<setw(15)<<"Don Gia "<<endl;

        for(int i=0; i<n; i++)
        {
            x[i].xuat();
        }
    }
};

int main()
{


    PHIEU a;
    a.nhap();
    a.xuat();
}
