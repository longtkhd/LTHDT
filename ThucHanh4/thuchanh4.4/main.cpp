#include <bits/stdc++.h>

using namespace std;
class XEHOI
{
    string nhanhieu,hangsx,kieudang,mauson,xuatxu;
    int Y,gia;
public:
    void nhap()
    {
        cout<<"nhap nhan hieu: ";
        fflush(stdin);
        getline(cin,nhanhieu);
        cout<<"nhap hang sx: ";
        fflush(stdin);
        getline(cin,hangsx);
        cout<<"nhap kieu dang: ";
        fflush(stdin);
        getline(cin,kieudang);
        cout<<"nhap mauson: ";
        fflush(stdin);
        getline(cin,mauson);
        cout<<"nhap xuat xu: ";
        fflush(stdin);
        getline(cin,xuatxu);
        cout<<"nhap nam sx ";
        cin>>Y;
        cout<<"nhap gia ban: ";
        cin>>gia;

    }

    void xuat()
    {
        if(hangsx == "Toyota")
        cout<<setw(15)<<nhanhieu<<setw(15)<<hangsx<<setw(15)<<kieudang<<setw(15)<<mauson<<setw(15)<<xuatxu<<setw(15)<<Y<<setw(15)<<gia<<endl;
    }
    int getGia()
    {
        return gia;
    }
};
int main()
{
    int n;
    cout<<"nhap vao so xe hoi";
    cin>>n;
    XEHOI a[n];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i].getGia() > a[j].getGia())
                swap(a[i],a[j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }


}
