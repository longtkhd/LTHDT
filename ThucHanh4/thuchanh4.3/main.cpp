#include <bits/stdc++.h>

using namespace std;
class DATE
{
    friend class HANG;
    int D,M,Y;

};
class HANG
{
    int Mahang;
    string Tenhang;
    DATE Ngaysx;
public:
    void nhap()
    {
        cout<<"nhap ma hang: ";
        cin>>Mahang;
        cout<<"nhap Ten hang ";
        cin.ignore();
        getline(cin,Tenhang);
        cout<<"nhap ngay: ";
        cin>>Ngaysx.D;
        cout<<"nhap thang: ";
        cin>>Ngaysx.M;
        cout<<"nhap nam: ";
        cin>>Ngaysx.Y;

    }
    void xuat()
    {
        if(Ngaysx.Y == 2017)
        cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Ngaysx.D<<"/"<<Ngaysx.M<<"/"<<Ngaysx.Y<<endl;
    }
};

int main()
{
    int n;
    cout<<"nhap so mat hang: ";
    cin>>n;
    HANG a[n];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();
    }
    cout<<setw(15)<<"ma hang"<<setw(15)<<"ten hang"<<setw(15)<<"ngay sx"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }

}
