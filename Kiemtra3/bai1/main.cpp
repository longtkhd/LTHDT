#include <bits/stdc++.h>
using namespace std;
class MAY;
class MAYTINH{
protected:
    int tocdo,dungluongram,dungluonghdd;

public:
    void input(){
        cout<<"nhap toc do:";
        cin>>tocdo;
        cout<<"nhap dung luong ram:";
        cin>>dungluongram;
        cout<<"nhap dung luong hdd:";
        cin>>dungluonghdd;
    }
    void output(){
        cout<<setw(15)<<tocdo<<setw(15)<<dungluongram<<setw(15)<<dungluonghdd<<setw(15);
    }


};

class NHASX{
    friend void XOA(MAY a[],int &n);
    friend void IN_IBM(MAY a[],int n);
    friend class MAY;

    char tensx[50],diachi[50];
};

class MAY : public MAYTINH{
    friend void XOA(MAY a[],int &n);
    friend void IN_IBM(MAY a[],int n);

    char nhanhieu[50];
    int giathanh;
    NHASX x;
public:
    void input(){
        cout<<"nhap ten nhan hieu:";
        fflush(stdin);
        gets(nhanhieu);

        cout<<"nhap gia thanh:";
        cin>>giathanh;
        MAYTINH::input();
        cout<<"nhap ten nha san xuat:";
        fflush(stdin);
        gets(x.tensx);
        cout<<"nhap dia chi:";
        fflush(stdin);
        gets(x.diachi);

    }

    void output(){
        cout<<setw(15)<<nhanhieu<<setw(15)<<giathanh<<setw(15)<<x.tensx<<setw(15)<<x.diachi;
        MAYTINH::output();
        cout<<endl;
    }
};
void IN_IBM(MAY a[],int n){
    for(int i=0;i<n;i++){
        if(strcmp(a[i].x.tensx,"IBM")==0){
            a[i].output();
        }
    }
}

void XOA(MAY a[],int &n){
    for(int i=0;i<n;i++){
        while(strcmp(a[i].x.tensx,"INTEL")==0){
            for(int j=i;j<n;j++)
                a[j]=a[j+1];
            n--;
            i--;

        }
    }
}

int main()
{
    int n;
    cout<<"nhap so may tinh:"<<endl;
    cin>>n;
    MAY a[n];
    for(int i=0;i<n;i++){
            cout<<"nhap may tinh thu:"<<i+1<<endl;
        a[i].input();
    }
    cout<<setw(15)<<"nhan hieu"<<setw(15)<<"gia thanh"<<setw(15)<<"ten nha sx"<<setw(15)<<"dia chi"<<setw(15)<<"toc do"<<setw(15)<<"dung luong ram"<<setw(15)<<"dung luong hdd"<<endl;

    for(int i=0;i<n;i++){

        a[i].output();
    }
    cout<<setw(15)<<"nhan hieu"<<setw(15)<<"gia thanh"<<setw(15)<<"ten nha sx"<<setw(15)<<"dia chi"<<setw(15)<<"toc do"<<setw(15)<<"dung luong ram"<<setw(15)<<"dung luong hdd"<<endl;
    cout<<"thong tin nha sx IBM: "<<endl;
    IN_IBM(a,n);
    XOA(a,n);
    cout<<"thong tin sau khi xoa tat ca hang intel la:"<<endl;
    cout<<setw(15)<<"nhan hieu"<<setw(15)<<"gia thanh"<<setw(15)<<"ten nha sx"<<setw(15)<<"dia chi"<<setw(15)<<"toc do"<<setw(15)<<"dung luong ram"<<setw(15)<<"dung luong hdd"<<endl;
    for(int i=0;i<n;i++){

        a[i].output();
    }






}
