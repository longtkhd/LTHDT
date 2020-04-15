#include <bits/stdc++.h>
class CAUTHU;
using namespace std;
class PERSON {
protected:
    char Hoten[50],Quequan[100];
    int ngay,thang,nam;
};

class VANDONGVIEN : public PERSON{protected:
    friend void IN_LUONG(CAUTHU a[],int n);
    char BoMon[30];
    float Thunhap;
};
class CAUTHU : public VANDONGVIEN{
    friend void IN_TT(CAUTHU a[],int n);
protected:
    char CLB[100],Vitri[100];
public:
    void nhap(){
        cout<<"nhap ho ten: ";fflush(stdin);gets(Hoten);
        cout<<"nhap que quan: ";fflush(stdin); gets(Quequan);
        cout<<"nhap ngay/thang/nam: "<<endl;cin>>ngay>>thang>>nam;
        cout<<"nhap ten bo mon: ";fflush(stdin); gets(BoMon);
        cout<<"nhap thu nhap: ";cin>>Thunhap;
        cout<<"nhap clb:";fflush(stdin);gets(CLB);
        cout<<"nhap vi tri:";fflush(stdin);gets(Vitri);
    }

    void xuat(){
        cout<<setw(15)<<Hoten<<setw(15)<<Quequan<<setw(15)<<ngay<<"/"<<thang<<"/"<<nam<<setw(15)<<BoMon<<setw(15)<<Thunhap<<endl;

    }
};

void IN_TT(CAUTHU a[],int n){
    for(int i=0;i<n;i++){
            if(strcmp(a[i].CLB,"T&T")==0){
                a[i].xuat();
            }

    }
}

void IN_LUONG(CAUTHU a[],int n){
    int MAX =0;
    for(int i=0;i<n;i++){
        if(a[i].Thunhap > MAX){
            MAX = a[i].Thunhap;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i].Thunhap == MAX)
            a[i].xuat();
    }
}
int main()
{
    int n;
    do{
        cout<<"nhap n:"<<endl;
        cin>>n;
    }while(n<0 || n>50);
    CAUTHU a[n];
    for(int i=0;i<n;i++){
        cout<<"nhap cau thu thu: "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<setw(15)<<"ho ten"<<setw(15)<<"que quan"<<setw(25)<<"ngay/thang/nam"<<setw(15)<<"bo mon"<<setw(15)<<"thu nhap"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    cout<<"thong tin cau thu clb T&T=============>"<<endl;

    IN_TT(a,n);
    cout<<"thong tin cau thu luong cao nhat=========>"<<endl;
    IN_LUONG(a,n);
}
