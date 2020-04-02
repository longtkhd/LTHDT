#include <bits/stdc++.h>

using namespace std;
class QUANLY{
    int maql;
    string Hoten;
public:
    void nhap(){
        cout<<"nhap maql:"<<endl;
        cin>>maql;
        cout<<"nhap ho va ten:"<<endl;
        fflush(stdin);
        getline(cin,Hoten);
    }
    void xuat(){
        cout<<"nhap maql:"<<" " <<maql<<endl;
        cout<<"nhap ho va ten:"<<" "<<Hoten<<endl;

    }
};
class MAY{
    int Mamay;
    string Kieumay,Tinhtrang;
public:
    void nhap(){
        cout<<"nhap ma may:"<<endl;
        cin>>Mamay;
        cout<<"nhap kieu may:"<<endl;
        fflush(stdin);
        getline(cin,Kieumay);
        cout<<"nhap tinh trang may:"<<endl;
        fflush(stdin);
        getline(cin,Tinhtrang);
    }

    void xuat(){
        cout<<setw(15)<<Mamay<<setw(15)<<Kieumay<<setw(15)<<Tinhtrang<<endl;
    }
};
class PHONGMAY{
    int Maphong,Dientich;
    string Tenphong;
    QUANLY x;
    MAY y[100];
    int n;
public:
    void nhap(){

        cout<<"nhap ma phong:"<<endl;
        cin>>Maphong;
        cout<<"nhap ten phong:"<<endl;
        fflush(stdin);
        getline(cin,Tenphong);
        cout<<"nhap dien tich phong:"<<endl;
        cin>>Dientich;
        x.nhap();
        cout<<"nhap so may:"<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            y[i].nhap();
        }
    }
    void xuat(){
        cout<<"ma phong:"<<Maphong<<endl;
        cout<<"ten phong:"<<Tenphong<<endl;
        cout<<"dien tich:"<<Dientich<<endl;
        x.xuat();
        cout<<setw(15)<<"Ma may"<<setw(15)<<"kieu may"<<setw(15)<<"tinh trang"<<endl;
        for(int i=0;i<n;i++){
            y[i].xuat();
        }
    }



};
int main()
{
    PHONGMAY a;
    a.nhap();
    a.xuat();
}
