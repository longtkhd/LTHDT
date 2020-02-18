#include <bits/stdc++.h>

using namespace std;
class MAYIN
{
protected:
    int trongluong,nam;
    string hangsanxuat;

};
class MAYINKIM : public MAYIN
{
protected:
    int sokim,tocdo;
public:
    void nhap()
    {
        cout<<"nhap hang san xuat:"<<endl;
        fflush(stdin);
        getline(cin,hangsanxuat);
        cout<<"nhap trong luong:"<<endl;
        cin>>trongluong;
        cout<<"nhap nam:"<<endl;
        cin>>nam;
        cout<<"nhap so kim:"<<endl;
        cin>>sokim;
        cout<<"nhap toc do:"<<endl;
        cin>>tocdo;

    }
    void xuat()
    {
        cout<<setw(15)<<hangsanxuat<<setw(15)<<trongluong<<setw(15)<<nam<<setw(15)<<sokim<<setw(15)<<tocdo<<endl;

    }
};
class MAYINLASER : public MAYIN
{
protected:
    int dophangiai,tocdo;
public:
    void nhap()
    {
        cout<<"nhap hang san xuat:"<<endl;
        fflush(stdin);
        getline(cin,hangsanxuat);
        cout<<"nhap trong luong:"<<endl;
        cin>>trongluong;
        cout<<"nhap nam:"<<endl;
        cin>>nam;
        cout<<"nhap do phan giai:"<<endl;
        cin>>dophangiai;
        cout<<"nhap toc do:"<<endl;
        cin>>tocdo;

    }
    void xuat()
    {
        cout<<setw(15)<<hangsanxuat<<setw(15)<<trongluong<<setw(15)<<nam<<setw(15)<<dophangiai<<setw(15)<<tocdo<<endl;
    }
};


int main()
{
    int n,m;
    cout<<"nhap n:"<<endl;
    cin>>n;
    cout<<"nhap m:"<<endl;
    cin>>m;
    MAYINKIM a[100];
    MAYINLASER b[100];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();
    }
    cout<<"BANG MAY IN KIM:"<<endl;
    cout<<setw(15)<<"hang san xuat"<<setw(15)<<"trong luong"<<setw(15)<<"nam"<<setw(15)<<"so  kim"<<setw(15)<<"toc do"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
    for(int i=0;i<n;i++)
    {
        b[i].nhap();
    }
    cout<<"BANG MAY IN LASER:"<<endl;
    cout<<setw(15)<<"hang san xuat"<<setw(15)<<"trong luong"<<setw(15)<<"nam"<<setw(15)<<"do phan giai"<<setw(15)<<"toc do"<<endl;
    for(int i=0;i<n;i++)
    {
        b[i].xuat();
    }




}
