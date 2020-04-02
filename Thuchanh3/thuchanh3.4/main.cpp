#include <bits/stdc++.h>

using namespace std;
class DATE
{
    friend  class NHANSU;

    int ngay,thang,nam;
public:
    void nhap()
    {
        cout<<"nhap ngay:"<<endl;
        cin>>ngay;
        cout<<"nhap thang:"<<endl;
        cin>>thang;
        cout<<"nhap nam:"<<endl;
        cin>>nam;
    }
};

class NHANSU
{
    string Hoten;
    DATE ngaysinh;
    int cmtnd;
public:
    void nhap()
    {
        cout<<"nhap ho va ten:"<<endl;
        fflush(stdin);
        getline(cin,Hoten);
        ngaysinh.nhap();
    }
    void xuat()
    {

        cout<<setw(15)<<Hoten<<setw(15)<<ngaysinh.ngay<<"/"<<ngaysinh.thang<<"/"<<ngaysinh.nam<<endl;
    }
    string getHoten()
    {
        return Hoten;
    }

};
int main()
{
    int n;
    cout<<"nhap vao so nhan su"<<endl;
    cin>>n;
    NHANSU x[100];
    for(int i=0; i<n; i++)
    {
        x[i].nhap();

    }
    cout<<setw(15)<<"ho va ten"<<setw(15)<<"ngay/thang/nam"<<endl;
    for(int i=0; i<n; i++)
    {
        x[i].xuat();

    }
    cout<<"danh sach sau khi sap xep la:"<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(x[i].getHoten()>x[j].getHoten())
            {
                NHANSU tg = x[i];
                x[i]=x[j];
                x[j]=tg;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        x[i].xuat();

    }

}
