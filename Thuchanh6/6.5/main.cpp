#include <bits/stdc++.h>

using namespace std;
class SANPHAM
{
    protected:
    string maSp,tenSp,mauSac;
    int ngaySx,trongLuong;

};
class HANGDIENTU : public SANPHAM
{
protected:
    int congSuat,dongDien;
public:
    void nhap(){
        cout<<"nhap ma sp: "; fflush(stdin); getline(cin,maSp);
        cout<<"nhap ten sp: ";fflush(stdin); getline(cin,tenSp);
        cout<<"nhap mau sac: ";fflush(stdin); getline(cin,mauSac);
        cout<<"nhap ngay sx: ";cin>>ngaySx;
        cout<<"nhap trong luong: ";cin>>trongLuong;
        cout<<"nhap cong suat: "; cin>>congSuat;
        cout<<"nhap dong dien: "; cin>>dongDien;

    }
    void xuat()
    {
        cout<<setw(15)<<maSp<<setw(15)<<tenSp<<setw(15)<<mauSac<<setw(15)<<ngaySx<<setw(15)<<trongLuong<<setw(15)<<congSuat<<setw(15)<<dongDien<<endl;
    }
};

int main()
{
    int n;
    cout<<"nhap n: ";cin>>n;
    HANGDIENTU a[n];


    for(int i=0;i<n;i++)
    {
         cout<<"nhap hang dien tu thu " <<i+1<<endl;
         a[i].nhap();
    }
    cout<<"=========================>"<<endl;
    for(int i=0;i<n;i++)
    {

         a[i].xuat();
    }

}
