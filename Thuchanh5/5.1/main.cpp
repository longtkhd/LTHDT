#include <bits/stdc++.h>

using namespace std;
class NhanVien;
class Date
{
    friend class NhanVien;
    int day,month,year;

};
class PhongBan
{
    friend void In_taichinh(NhanVien a[],int n);
    friend class NhanVien;
    int maPb,soNv;
    char tenPb[50],truongPhong[50];

};
class NhanVien
{
    int maNv;
    char hoDem[25];
    char ten[10];
    Date ngaySinh;
    PhongBan phong;
    friend void In_taichinh(NhanVien a[],int n);
    friend void Sort_Nv(NhanVien a[],int n);
    friend void Insert_nv(NhanVien a[],int &n);
    friend void xoa_nv(NhanVien a[],int &n);

public:

    void nhap(){
        cout<<"nhap ma nv:";
        cin>>maNv;
        cout<<"nhap ho dem:";
        fflush(stdin);
        gets(hoDem);
        cout<<"nhap ngay thang nam:"<<endl;
        cin>>ngaySinh.day>>ngaySinh.month>>ngaySinh.year;
        cout<<"nhap mapb:";
        cin>>phong.maPb;
        cout<<"nhap so nv:";
        cin>>phong.soNv;
        cout<<"nhap ten phong ban:";
        fflush(stdin);
        gets(phong.tenPb);
        cout<<"nhap truong phong:";
        fflush(stdin);
        gets(phong.truongPhong);
    }
    void xuat(){
        cout<<setw(15)<<maNv<<setw(15)<<hoDem<<setw(15)<<ngaySinh.day<<"/"<<ngaySinh.month<<"/"<<ngaySinh.year<<setw(15)<<phong.maPb<<setw(15)<<phong.tenPb<<setw(15)<<phong.soNv<<setw(15)<<phong.truongPhong<<endl;

    }
};
void In_taichinh(NhanVien a[],int n){
    for(int i=0;i<n;i++){
        if(strcmp(a[i].phong.tenPb, "Taichinh") == 0)
        a[i].xuat();
    }

}

void Sort_Nv(NhanVien a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(a[i].ten,a[j].ten)>0)
                swap(a[i],a[j]);
        }
    }
}

void Insert_nv(NhanVien a[],int &n){
    int k;
    cout<<"nhap k:";
    cin>>k;
    NhanVien b;
    cout<<"nhap nv moi:"<<endl;
    b.nhap();
    if(k>=0 && k<=n){
        for(int i=n;i>=k;i--)
                a[i]=a[i-1];
        a[k]=b;
        n++;


    }

}

void xoa_nv(NhanVien a[],int &n){
    for(int i=0;i<n;i++){
        while(a[i].maNv == 123){
            for(int j=i;j<n;j++){
                a[j]=a[j+1];
            n--;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"nhap so nhan vien:";
    cin>>n;
    NhanVien a[30];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }


    Insert_nv(a,n);
    cout<<"sau khi chen:"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }




}
