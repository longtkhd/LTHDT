#include <bits/stdc++.h>

using namespace std;
class PERSON
{
protected:
    char Hoten[50],Ngaysinh[12],Quequan[100];
public:
    PERSON()
    {
        Hoten == "";
        Ngaysinh == "";
        Quequan == "";
    }
};
class DIEM
{
protected:
    int diemtoan,diemly,diemhoa;
public:
    DIEM()
    {
        diemtoan = 0;
        diemly = 0;
        diemhoa =0;
    }
};
class HOCSINH : public PERSON,public DIEM
{
protected:
    char Lop[30];
    int tongdiem;
public:
    HOCSINH()
    {
        Lop == " ";
        tongdiem = 0;
    }
    void nhap()
    {
        cout<<"nhap ho ten:"<<endl;

        gets(Hoten);
        cout<<"nhap ngay sinh:"<<endl;

        gets(Ngaysinh);
        cout<<"nhap que quan:"<<endl;
        gets(Quequan);
        cout<<"nhap diem toan:"<<endl;
        cin>>diemtoan;
        cout<<"nhap diem ly:"<<endl;
        cin>>diemly;
        cout<<"nhap diem hoa:"<<endl;
        cin>>diemhoa;
    }
    void xuat()
    {
        cout<<setw(15)<<Hoten<<setw(15)<<Ngaysinh<<setw(15)<<Quequan<<setw(15)<<diemtoan<<setw(15)<<diemly<<setw(15)<<diemhoa<<endl;
    }
};

int main()
{
    HOCSINH a;
    a.nhap();
    cout<<setw(15)<<"ho va ten"<<setw(15)<<"ngay sinh"<<setw(15)<<"que quan"<<setw(15)<<"diem toan"<<setw(15)<<"diem ly"<<setw(15)<<"diem hoa"<<endl;
    a.xuat();

}
