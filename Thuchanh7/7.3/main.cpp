#include <bits/stdc++.h>

using namespace std;
class BENHNHAN{
protected:
    string hoten,quequan;
    int nam;
public:
    void nhap(){
        cout<<"nhap ho ten:";
        fflush(stdin);
        getline(cin,hoten);
        cout<<"nhap que quan:";
        fflush(stdin);
        getline(cin,quequan);
        cout<<"nhap nam sinh";
        cin>>nam;

    }
    void xuat(){
        cout<<setw(15)<<hoten<<setw(15)<<quequan<<setw(15)<<nam<<setw(15);

    }
};

class BENHAN : public BENHNHAN{
protected:
    string tenbenhan;
    int tien;
    friend void Hight(BENHAN a[],int n);
public:

    void nhap(){
        cout<<"nhap ten benh an";
        fflush(stdin);
        getline(cin,tenbenhan);
        cout<<"nhap tien ";
        cin>>tien;
        BENHNHAN::nhap();
    }
    void xuat(){
        cout<<setw(15)<<tenbenhan<<setw(15)<<tien<<setw(15);
         BENHNHAN::xuat();
         cout<<endl;

    }
    int tuoi(){
        return  2020 - nam;
    }
};

void Sort(BENHAN a[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].tuoi()<a[j].tuoi());
            swap(a[i],a[j]);
        }
    }
}

void In(BENHAN a[],int n)
{
    for(int i=0;i<n;i++){
        if(a[i].tuoi()<=10){
            a[i].xuat();
        }
    }
}

void Hight(BENHAN a[],int n) {
    int MAX = 0;
    for(int i=0;i<n;i++){
        if(a[i].tien > MAX)
            MAX = a[i].tien;
    }
    for(int i=0;i<n;i++){
        if(a[i].tien == MAX){
            a[i].xuat();
        }
    }
}
int main()
{
    int n;
    cout<<"nhap n ";
    cin>>n;
    BENHAN a[n];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }

    cout<<"thong tin benh nhan:"<<endl;

    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    Sort(a,n);
    cout<<"sau khi sort: "<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    In(a,n);
    cout<<"benh nhan co tien vp cao nhat: "<<endl;
    Hight(a,n);



}
