#include <bits/stdc++.h>

using namespace std;
class XeHoi;
class Date{
    friend class XeHoi;
    int nam;
};
class XeHoi{
    char nhanhieu[50],hangsanxuat[50],xuatxu[50];
    int giaban,soluong;
    Date x;
public:
    void nhap(){
        cout<<"nhap nhan hieu";
        fflush(stdin);
        gets(nhanhieu);
        cout<<"nhap hang san xuat";
        fflush(stdin);
        gets(hangsanxuat);
        cout<<"xuat xu: ";
        fflush(stdin);
        gets(xuatxu);
        cout<<"nhap nam sx";
        cin>>x.nam;
        cout<<"nhap gia ban";
        cin>>giaban;
        cout<<"nhap so luong";
        cin>>soluong;
    }
    void xuat(){
        cout<<setw(15)<<nhanhieu<<setw(15)<<hangsanxuat<<setw(15)<<xuatxu<<setw(15)<<x.nam<<setw(15)<<giaban<<setw(15)<<soluong<<setw(15)<<thanhtien()<<endl;
    }
    int thanhtien(){
        return soluong*giaban;

    }
};
int main()
{
    int n;
    cin>>n;
    XeHoi a[n];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
}
