#include <bits/stdc++.h>
class DoanhNghiep;
using namespace std;
class Date{
    int day,month,year;
    friend void Tong_2015(DoanhNghiep a[],int n);
    friend class DoanhNghiep;
public:
    void nhap()
    {
        cout<<"nhap ngay: "; cin>>day;
        cout<<"nhap thang: "; cin>>month;
        cout<<"nhap nam: "; cin>>year;
    }
    void xuat()
    {
        cout<<day<<month<<year;
    }

};
class DiaChi{
    char dienThoai[12],phuong[30],quan[30],thanhPho[30];
    friend class DoanhNghiep;
    friend void sapxep(DoanhNghiep a[],int n);
};
class DoanhNghiep
{
    int maDn;
    char tenDn[60],giamDoc[30];
    Date ngayTl;
    DiaChi diaChi;
    long doanhThu;
    friend void In_dn250(DoanhNghiep a[], int n);
    friend void Tong_2015(DoanhNghiep a[],int n);
    friend void ma_2010(DoanhNghiep a[],int n);
    friend void sapxep(DoanhNghiep a[],int n);
public:
    void nhap()
    {
        cout<<"nhap ma doanh nghiep: ";cin>>maDn;
        cout<<"nhap ten doanh nghiep: "; fflush(stdin); gets(tenDn);
        cout<<"nhap ngay tl: "<<endl; ngayTl.nhap();
        cout<<" nhap dien thoai: "; fflush(stdin); gets(diaChi.dienThoai);
        cout<<" nhap phuong: "; fflush(stdin); gets(diaChi.phuong);
        cout<<" nhap quan: "; fflush(stdin); gets(diaChi.quan);
        cout<<" nhap thanh pho: "; fflush(stdin); gets(diaChi.thanhPho);
        cout<<"nhap doanh thu: "; cin>>doanhThu;
    }

    void xuat(){
        cout<<setw(15)<<maDn<<setw(15)<<tenDn<<setw(15)<<diaChi.dienThoai<<setw(15)<<diaChi.phuong<<setw(15)<<diaChi.quan<<setw(15)<<diaChi.thanhPho<<setw(15)<<doanhThu<<setw(15);

        ngayTl.xuat();
        cout<<endl;
    }


};

void In_dn250(DoanhNghiep a[], int n)
{
    for(int i=0;i<n;i++){
        if(a[i].doanhThu<250)
        {
            a[i].xuat();
        }
    }
}

void Tong_2015(DoanhNghiep a[],int n)
{
    int tong =0;
    for(int i=0;i<n;i++){

        if(a[i].ngayTl.year==2015){
            tong += a[i].doanhThu;
        }

    }
    cout<<"tong doanh thu 2015 : "<<tong<<endl;

}

void ma_2010(DoanhNghiep a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i].maDn==2010)
        {
            a[i].xuat();
        }
    }
}
void sapxep(DoanhNghiep a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(a[i].diaChi.thanhPho,a[j].diaChi.thanhPho)<0){
                swap(a[i],a[j]);
            }
        }
    }
}
int main()
{
    int n;
    do{
        cout<<"nhap n: ";
        cin>>n;
    }while(n<=0);

    DoanhNghiep a[n];

     for(int i=0;i<n;i++)
     {
         cout<<"nhap thong tin doanh nghiep thu "<< i+1<<endl;
         a[i].nhap();
     }

     cout<<"thong tin tat ca doanh nghiep: "<<endl;

     cout<<setw(15)<<"ma doanh nghiep"<<setw(15)<<"ten doanh nghiep"<<setw(15)<<"dien thoai"<<setw(15)<<"phuong"<<setw(15)<<"quan"<<setw(15)<<"thanh pho"<<setw(15)<<"doanh thu"<<setw(15)<<"ngay thanh lap"<<endl;
     for(int i=0;i<n;i++){
        a[i].xuat();
     }

     In_dn250(a,n);
     Tong_2015(a,n);
     ma_2010(a,n);
     sapxep(a,n);
     cout<<setw(15)<<"ma doanh nghiep"<<setw(15)<<"ten doanh nghiep"<<setw(15)<<"dien thoai"<<setw(15)<<"phuong"<<setw(15)<<"quan"<<setw(15)<<"thanh pho"<<setw(15)<<"doanh thu"<<setw(15)<<"ngay thanh lap"<<endl;
     for(int i=0;i<n;i++){
        a[i].xuat();
     }


}
