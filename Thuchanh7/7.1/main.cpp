#include <bits/stdc++.h>

using namespace std;
class PRINTER{
protected:
    int TrongLuong,Namsx,Tocdo;
    string Hangsx;

};
class DOTPRINTER : public PRINTER{
protected:
    int Matdokim;
public:
    void nhap(){
        cout<<"nhap Trong luong: "; cin>>TrongLuong;
        cout<<"nhap nam sx: ";cin>>Namsx;
        cout<<"nhap hang sx: "; fflush(stdin); getline(cin,Hangsx);
        cout<<"nhap mat do kim: ";cin>>Matdokim;

    }
    void xuat()
    {
        cout<<setw(15)<<TrongLuong<<setw(15)<<Namsx<<setw(15)<<Hangsx<<setw(15)<<Matdokim<<endl;

    }


};

class LASERPRINTER : public PRINTER{
protected:
    int Dophangiai;
public:
    void nhap(){
        cout<<"nhap Trong luong: "; cin>>TrongLuong;
        cout<<"nhap nam sx: ";cin>>Namsx;
        cout<<"nhap hang sx: "; fflush(stdin); getline(cin,Hangsx);
        cout<<"nhap do phan giai: "; cin>>Dophangiai;
    }
    void xuat(){
        cout<<setw(15)<<TrongLuong<<setw(15)<<Namsx<<setw(15)<<Hangsx<<setw(15)<<Dophangiai<<endl;

    }
};

int main()
{
    DOTPRINTER a;
    LASERPRINTER b;
    a.nhap();
    cout<<"thong tin dotprinter:"<<endl;
    a.xuat();
    b.nhap();
    cout<<"thong tin laser:"<<endl;
    b.xuat();


}
