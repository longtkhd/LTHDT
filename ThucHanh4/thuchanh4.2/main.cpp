#include <bits/stdc++.h>

using namespace std;
class NSX
{
    friend class HANG;
    int Mansx;
    string Tennsx,DCNSX;

};
class HANG
{
    int Mahang,Dongia,TrongLuong;
    string Tenhang;
    NSX x;
public:

    void nhap(){
        cout<<"nhap ma hang: ";
        cin>>Mahang;
        cout<<"nhap Ten hang ";
        cin.ignore();
        getline(cin,Tenhang);
        cout<<"nhap Don gia ";
        cin>>Dongia;
        cout<<"nhap Trong luong ";
        cin>>TrongLuong;
        cout<<"nhap Ma nsx: ";
        cin>>x.Mansx;
        cout<<"nhap Tennsx: ";
        cin.ignore();
        getline(cin,x.Tennsx);

        cout<<"nhap DCNSX:";
        getline(cin,x.DCNSX);
    }
    void xuat(){
        cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Dongia<<setw(15)<<TrongLuong<<setw(15)<<x.Mansx<<setw(15)<<x.Tennsx<<setw(15)<<x.DCNSX<<endl;
    }
};
int main()
{
    HANG a;
    a.nhap();
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"Trong luong"<<setw(15)<<"mansx"<<setw(15)<<"tennsx"<<setw(15)<<"dia chi nsx"<<endl;
    a.xuat();
}
