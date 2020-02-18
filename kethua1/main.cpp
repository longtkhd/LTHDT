#include <bits/stdc++.h>

using namespace std;
class XE
{
protected:
    string nhanhieu;
    int gia,nam;

};
class OTO : public XE
{
protected:
    int socho,trongtai;
public:
    void nhap()
    {
        cout<<"nhap nhanhieu"<<endl;
        fflush(stdin);
        getline(cin,nhanhieu);
        cout<<"nhap gia:"<<endl;
        cin>>gia;
        cout<<"nhap nam:"<<endl;
        cin>>nam;
        cout<<"nhap so cho:"<<endl;
        cin>>socho;
        cout<<"nhap trong tai:"<<endl;
        cin>>trongtai;



    }
    void xuat()
    {
        cout<<setw(15)<<nhanhieu<<setw(15)<<gia<<setw(15)<<nam<<setw(15)<<socho<<setw(15)<<trongtai<<endl;
    }
};

int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
     OTO a[100];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();
    }
    cout<<setw(15)<<"nhan hieu"<<setw(15)<<"gia"<<setw(15)<<"nam:"<<setw(15)<<"so cho"<<setw(15)<<"trong tai"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
}
