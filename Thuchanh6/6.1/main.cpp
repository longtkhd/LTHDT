#include <bits/stdc++.h>

using namespace std;
class PERSON
{
    protected:
    string Hoten,Quequan;
    int Ngaysinh;
};
class KYSU: public PERSON
{
    friend void In(KYSU a[],int n);
protected:
    string nganh;
    int NamTN;
public:
    void nhap()
    {
        cout<<"nhap ho ten: ";  cin.ignore(); getline(cin,Hoten);
        cout<<"nhap Que quan: ";cin.ignore(); getline(cin,Quequan);
        cout<<"nhap nganh: "; cin.ignore(); getline(cin,nganh);
        cout<<"nhap ngay sinh: "; cin>>Ngaysinh;
        cout<<"nhap nam TN: "; cin>>NamTN;


    }
    void xuat(){
        cout<<setw(15)<<Hoten<<setw(15)<<Quequan<<setw(15)<<nganh<<setw(15)<<Ngaysinh<<setw(15)<<NamTN<<endl;

    }
};

void In(KYSU a[],int n){
    int MAX = a[0].NamTN;
        for(int i=0;i<n;i++){
            if(a[i].NamTN>MAX)
                MAX = a[i].NamTN;
        }
        for(int i=0;i<n;i++){
            if(a[i].NamTN == MAX)
               a[i].xuat();
        }

}


int main()
{
    int n;
    cout<<"nhap n: ";
    cin>>n;
    KYSU a[n];

    for(int i=0;i<n;i++){
        a[i].nhap();
    }
    cout<<setw(15)<<"ho ten"<<setw(15)<<"que quan"<<setw(15)<<"nganh"<<setw(15)<<"ngay sinh"<<setw(15)<<"nam tn"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    cout<<"sinh vien tot nghiep gan nhat: "<<endl;
    In(a,n);




}
