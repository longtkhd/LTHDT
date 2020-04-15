#include <bits/stdc++.h>


using namespace std;
class Phieu;
class Phong
{
protected:
    string tenPhong, maPhong, truongPhong;
};
class NhanVien
{
protected:
    string hoVaTen, chucVu;
};
class TaiSan
{
    string tenTaiSan, tinhTrang;
    int soLuong;
    friend void SapXep(Phieu x);
    friend void Xoa(Phieu &x);
    friend class Phieu;
public:
    void Nhap()
    {
        cout<<"Nhap ten tai san: ";
        fflush(stdin);
        getline(cin, tenTaiSan);

        cout<<"Nhap so luong: ";
        cin>>soLuong;

        cout<<"Tinh trang: ";
        fflush(stdin);
        getline(cin, tinhTrang);
    }
    void Xuat()
    {
        cout<<setw(15)<<tenTaiSan<<setw(5)<<soLuong<<setw(15)<<tinhTrang<<endl;
    }
};
class Phieu: private Phong, private NhanVien
{
    string maPhieu;
    int d, m, y, soTaiSan;
    TaiSan ts[100];
    friend void SapXep(Phieu x);
    friend void Xoa(Phieu &x);
public:
    void Nhap()
    {
        cout<<"Nhap ma phieu: ";
        cin>>maPhieu;
        cout<<"Nhap ngay : ";
        cin>>d;
        cout<<"Nhap thang: ";
        cin>>m;
        cout<<"Nhap nam: ";
        cin>>y;
        cout<<"Nhap ten nhan vien: ";
        fflush(stdin);
        getline(cin, hoVaTen);
        cout<<"Nhap chuc vu: ";
        fflush(stdin);
        getline(cin, chucVu);
        cout<<"Nhap ten phong: ";
        fflush(stdin);
        getline(cin, tenPhong);
        cout<<"Nhap ma phong: ";
        cin>>maPhong;
        cout<<"Nhap truong phong: ";
        fflush(stdin);
        getline(cin, truongPhong);
        cout<<"Nhap so tai san: ";
        cin>>soTaiSan;
        for(int i=0; i<soTaiSan; ++i)
            ts[i].Nhap();
    }
    int SoLuong()
    {
        int rs = 0;
        for(int i=0; i<soTaiSan; ++i)
            rs += ts[i].soLuong;
        return rs;
    }
    void Xuat()
    {
        cout<<"PHIEU KIEM KE TAI SAN"<<endl;
        cout<<setw(20)<<"Ma phieu: "<<setw(15)<<maPhieu<<setw(10)<<"Ngay kiem ke: "<<d<<"/"<<m<<"/"<<y<<endl;
        cout<<setw(20)<<"Nhan vien kiem ke: "<<setw(15)<<hoVaTen<<setw(10)<<"Chuc vu: "<<setw(15)<<chucVu<<endl;
        cout<<setw(20)<<"Kiem ke tai phong: "<<setw(15)<<tenPhong<<setw(10)<<"Ma Phong: "<<setw(15)<<maPhong<<endl;
        cout<<setw(20)<<"Truong phong: "<<setw(15)<<truongPhong<<endl;

        cout<<setw(15)<<"Ten tai san"<<setw(15)<<"So luong"<<setw(15)<<"Tinh trang"<<endl;
        for(int i=0; i<soTaiSan; ++i)
            ts[i].Xuat();

        cout<<"So tai san da kiem ke: "<<setw(10)<<soTaiSan<<"Tong so luong: "<<SoLuong()<<endl;
    }
};
void SapXep(Phieu x)
{
    for(int i=0;i<x.soTaiSan;++i)
        for(int j=0;j<i;++j)
            if(x.ts[i].soLuong < x.ts[j].soLuong)
                swap(x.ts[i], x.ts[j]);
}
void Xoa(Phieu &x)
{
    for(int i=0;i<x.soTaiSan;++i)
    {
        while(x.ts[i].tenTaiSan == "May vi tinh")
        {
            for(int j=i;j<x.soTaiSan-1;++j)
                x.ts[j] = x.ts[j+1];
                x.soTaiSan --;
        }
    }
}
int main()
{
    Phieu x;
    x.Nhap();
    SapXep(x);
    x.Xuat();
    Xoa(x);
    x.Xuat();
    return 0;
}
