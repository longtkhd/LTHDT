#include <bits/stdc++.h>

using namespace std;
class THUCPHAM
{
protected:

    string tenThucpham;
    int gia;
public:
    void nhap()
    {
        cout<<"nhap ten tp ";
        fflush(stdin);
        getline(cin,tenThucpham);
        cout<<"nhap gia :";
        cin>>gia;
    }
    void xuat()
    {
        cout<<"ten sp "<<tenThucpham<<endl;
        cout<<"gia"<<gia<<endl;
    }
};
class TPHOP : public THUCPHAM
{
protected:
    int sohop;
public:
    void nhap()
    {
        THUCPHAM::nhap();

        cout<<"nhap so hop: ";
        cin>>sohop;
    }
    void xuat()

    {
        THUCPHAM::xuat();
        cout<<"so hop "<<sohop<<endl;
    }

};
class TPKHOP : public THUCPHAM
{
protected:
    int khoiLuong;
public:
    void nhap()
    {
        THUCPHAM::nhap();
        cout<<"nhap khoi luong ";
        cin>>khoiLuong;
    }
    void xuat()
    {
        THUCPHAM::xuat();
        cout<<"khoi luong: "<<khoiLuong;
    }
};
int main()
{
    TPHOP a;
    TPKHOP b;
    cout<<"nhap thong tin TP co hop "<<endl;
    a.nhap();
    a.xuat();
    cout<<"==================>"<<endl;
    cout<<"nhap thong tin TP khong hop "<<endl;
    b.nhap();
    b.xuat();


}
