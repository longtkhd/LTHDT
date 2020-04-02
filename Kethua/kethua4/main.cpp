#include <bits/stdc++.h>

using namespace std;
class NHANSU
{
protected:
    char hoten[50],gioitinh[50],diachi[100];
    int ngay,thang,nam;
};
class CONGCHUC : public NHANSU
{

protected:
    char nganhnghe[20],trinhdo[50];
    int namvaoCQ;
    float hsluong,phcap;

public:
    void nhap()
    {
        cout<<"nhap ho va ten:"<<endl;
        fflush(stdin);
        gets(hoten);
        cout<<"nhap gioi tinh"<<endl;
        fflush(stdin);
        gets(gioitinh);
        cout<<"nhap dia chi:"<<endl;
        fflush(stdin);
        gets(diachi);
        cout<<"nhap ngay,thang,nam"<<endl;
        cin>>ngay>>thang>>nam;
        cout<<"nhap nganh nghe"<<endl;
        fflush(stdin);
        gets(nganhnghe);
        cout<<"nhap trinh do:"<<endl;
        fflush(stdin);
        gets(trinhdo);
        cout<<"nhap nam vao"<<endl;
        cin>>namvaoCQ;
        cout<<"hsluong"<<endl;
        cin>>hsluong;
        cout<<"phu cap"<<endl;
        cin>>phcap;

    }
    void xuat()
    {
        cout<<setw(8)<<hoten<<setw(8)<<gioitinh<<setw(8)<<diachi<<setw(8)<<ngay<<"/"<<thang<<"/"<<nam<<setw(8)<<nganhnghe<<setw(8)<<trinhdo<<setw(8)<<namvaoCQ<<setw(8)<<hsluong<<setw(8)<<phcap<<endl;

    }
    float thunhap()
    {
        return hsluong*830 + phcap;

    }


};

int main()
{
    int n;
    do
    {
        cout<<"nhap so cong chuc:"<<endl;
        cin>>n;
    }
    while(n<0 || n>50);
    CONGCHUC a[100];
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
        a[i].thunhap();
    }
    int M =a[0].thunhap();
    for(int i=0; i<n; i++)
    {
        if(a[i].thunhap()<M)
            M=a[i].thunhap();
    }
    cout<<"thong tin cong chuc co thu nhap thap nhat:"<<endl;
    cout<<setw(8)<<"ho ten"<<setw(8)<<"gioi tinh"<<setw(8)<<"dia chi"<<setw(8)<<"ngay/thang/nam"<<setw(8)<<"nganh nghe"<<setw(8)<<"trinh do"<<setw(8)<<"nam vao"<<setw(8)<<"he so luong"<<setw(8)<<"phu cap"<<endl;

    for(int i=0; i<n; i++)
    {
        if(a[i].thunhap()==M)
            a[i].xuat();
    }

    cout<<"danh sach sau khi nhap:"<<endl;
    cout<<setw(8)<<"ho ten"<<setw(8)<<"gioi tinh"<<setw(8)<<"dia chi"<<setw(8)<<"ngay/thang/nam"<<setw(8)<<"nganh nghe"<<setw(8)<<"trinh do"<<setw(8)<<"nam vao"<<setw(8)<<"he so luong"<<setw(8)<<"phu cap"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }

    //sap xep
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            swap(a[i],a[j]);
        }
    }
    cout<<"bang sau khi sap xep"<<endl;
    cout<<setw(8)<<"ho ten"<<setw(8)<<"gioi tinh"<<setw(8)<<"dia chi"<<setw(8)<<"ngay/thang/nam"<<setw(8)<<"nganh nghe"<<setw(8)<<"trinh do"<<setw(8)<<"nam vao"<<setw(8)<<"he so luong"<<setw(8)<<"phu cap"<<endl;

    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }




}
