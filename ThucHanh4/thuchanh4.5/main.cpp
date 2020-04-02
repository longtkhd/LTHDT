#include <bits/stdc++.h>

using namespace std;
class Date
{
    friend class DoanhNghiep;
    int day,month,year;
public:
    void nhap()
    {
        cout<<"nhap ngay: ";
        cin>>day;
        cout<<"nhap thang: ";
        cin>>month;
        cout<<"nhap nam: ";
        cin>>year;
    }
    void xuat()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
class DiaChi
{
    friend class DoanhNghiep;
    char dienThoai[12],phuong[30],quan[30],thanhPho[30];

};
class DoanhNghiep
{
    int maDn;
    char tenDn[60],giamDoc[30];
    Date ngayTl;
    DiaChi diaChi;
    long doanhThu;
public:
    void nhap()
    {
        cout<<"nhap ma Dn: ";
        cin>>maDn;
        fflush(stdin);
        cout<<"nhap Ten Dn: ";
        gets(tenDn);
        fflush(stdin);
        cout<<"nhap giam doc: ";
        gets(giamDoc);
        cout<<"nhap doanh thu: ";
        cin>>doanhThu;
        ngayTl.nhap();
        cout<<"nhap dien thoai ";
        fflush(stdin);
        gets(diaChi.dienThoai);
        cout<<"nhap phuong ";
        fflush(stdin);
        gets(diaChi.phuong);
        cout<<"nhap quan ";
        fflush(stdin);
        gets(diaChi.quan);
        cout<<"nhap thanh pho ";
        fflush(stdin);
        gets(diaChi.thanhPho);

    }
    void xuat()
    {
        if(strcmp(diaChi.thanhPho,"HaNoi")==0)
        cout<<setw(15)<<maDn<<setw(15)<<tenDn<<setw(15)<<giamDoc<<setw(15)<<doanhThu<<setw(15)<<diaChi.dienThoai<<setw(15)<<diaChi.phuong<<setw(15)<<diaChi.quan<<setw(15)<<diaChi.thanhPho<<endl;
    }
    long getDoanhthu()
    {
        return doanhThu;
    }
    int getY(){
        return ngayTl.year;
    }
    int getmaDn(){
       return maDn;
    }

};
int main()
{
    int n;
    cout<<"nhap so doanh nghiep: ";
    cin>>n;
    DoanhNghiep a[n];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();
    }

    //cho nay dai qua
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }

    int tong=0;
    for(int i=0;i<n;i++){

        if(a[i].getY()==2015){
            tong += a[i].getDoanhthu();

        }
    }
    cout<<"tong doanh thu:"<<tong;
    int ma;
    cout<<"nhap ma dn:";
    cin>>ma;
    for(int i=0;i<n;i++){
        if(ma == a[i].getmaDn()){
            a[i].nhap();
        }
    }
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }






}
