#include <bits/stdc++.h>
class Nhanvien;
using namespace std;
class Date{
    int day,month,year;
    friend class Nhanvien;
    friend void In_nv1990(Nhanvien a[],int n);
    friend  void Sort(Nhanvien a[],int n);

};
class PhongBan
{
    int maPb,soNv;
    char tenPb[50];
    char truongPhong[10];
    friend class Nhanvien;
     friend void Search_mapb(Nhanvien a[],int n);
     friend void  Delete_hanhchinh(Nhanvien a[],int &n);

};

class Nhanvien
{
    int maNv;
    char hoDem[25],ten[10];
    Date ngaySinh;
    PhongBan phong;
    friend void In_nv1990(Nhanvien a[],int n);
    friend void Sort(Nhanvien a[],int n);
    friend void Search_mapb(Nhanvien a[],int n);
    friend void Delete_hanhchinh(Nhanvien a[],int &n);
public:
    void nhap()
    {
        cout<<"nhap ma nhan vien: "; cin>>maNv;
        cout<<"nhap ho dem: "; fflush(stdin); gets(hoDem);
        cout<<"nhap ngay sinh: "; cin>>ngaySinh.day;
        cout<<"nhap thang sinh: ";cin>>ngaySinh.month;
        cout<<"nhap nam sinh: ";cin>>ngaySinh.year;
        cout<<"nhap ma phong ban: "; cin>>phong.maPb;
        cout<<"nhap ten phong ban: "; fflush(stdin); gets(phong.tenPb);
        cout<<"nhap ten truong phong: "; fflush(stdin); gets(phong.truongPhong);
        cout<<"nhap so nhan vien: "; cin>>phong.soNv;
    }
    void xuat()
    {
        cout<<setw(15)<<maNv<<setw(15)<<hoDem<<setw(15)<<ngaySinh.day<<"/"<<ngaySinh.month<<"/"<<ngaySinh.year<<setw(15)<<phong.maPb<<setw(15)<<phong.tenPb<<setw(15)<<phong.truongPhong<<setw(15)<<phong.soNv<<endl;

    }
};

void In_nv1990(Nhanvien a[],int n)
{
    for(int i=0;i<n;i++){
        if(a[i].ngaySinh.year==1990)
            a[i].xuat();
    }
}

void Sort(Nhanvien a[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].ngaySinh.year < a[j].ngaySinh.year)
                swap(a[i],a[j]);
        }
    }
}

void Search_mapb(Nhanvien a[],int n)
{
    for(int i=0;i<n;i++){
        if(a[i].phong.maPb==3011){
            a[i].xuat();
        }
    }
}

void Delete_hanhchinh(Nhanvien a[],int &n)
{
    for(int i=0;i<n;i++){
        while(strcmp(a[i].phong.tenPb,"Hanh chinh")==0){
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
    do{
        cout<<"nhap n: ";
        cin>>n;
    }while(n<0);
    Nhanvien a[n];
    for(int i=0;i<n;i++){
            cout<<"nhap vao nhan vien thu "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<setw(15)<<"ma nv"<<setw(15)<<"ho dem"<<setw(25)<<"ngay/thang/nam"<<setw(15)<<"ma phong ban"<<setw(15)<<"ten phong ban"<<setw(15)<<"ten truong phong"<<setw(15)<<"so nhan vien"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }

    cout<<"nhan vien sinh nam 1990: "<<endl;
    In_nv1990(a,n);
    Sort(a,n);
    cout<<"nhan vien sau khi sap xep: "<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    cout<<"nhan vien co ma phong ban 3011 la:"<<endl;
    Search_mapb(a,n);
    Delete_hanhchinh(a,n);
    cout<<"thong tin sau khi xoa nhan vien phong hanh chinh"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }






}
