#include <bits/stdc++.h>

using namespace std;

class XeHoi;
class DATE
{
	int d,t,y;
public:
    friend class XeHoi;
	friend void NamMoiNhat(XeHoi a[],int n);
	friend int thanhTien();
};

class XeHoi{
    string nhanHieu, hangSx, xuatXu;
    int giaBan, soLuong;
    DATE namSx;
    friend void Insert_nv(XeHoi a[],int &n);
    friend void tong_5100(XeHoi a[],int n);

public:
    void nhap(){
        fflush(stdin);
        cout<<"nhap nhan hieu: ";
        getline(cin, nhanHieu);

        cout<<"nhap hang Sx: ";
        getline(cin, hangSx);

        cout<<"nhap xuat xu: ";
        getline(cin, xuatXu);

        cout<<"nhap gia ban: ";
        cin>>giaBan;

        cout<<"nhap so luong: ";
        cin>>soLuong;

        cout<<"nhap nam Sx: ";
        cin>> namSx.y;
    }
    int thanhTien(){
        return giaBan * soLuong;

    }
    void xuat(){
        cout<<nhanHieu<<setw(10)<<hangSx<<setw(10)<<xuatXu<<setw(10)<<giaBan<<setw(10)<<soLuong<<setw(10)<<thanhTien()<<endl;
    }
    friend void NamMoiNhat(XeHoi a[],int n);


};

void Insert_nv(XeHoi a[],int &n){
    int k;
    cout<<"nhap k:";
    cin>>k;
    XeHoi b;
    cout<<"nhap xe moi:"<<endl;
    b.nhap();
    if(k>=0 && k<=n){
        for(int i=n;i>=k;i--)
                a[i]=a[i-1];
        a[k]=b;
        n++;


    }

}


void tong_5100(XeHoi a[],int n)
{
    for(int i=0;i<n;i++){
        if(a[i].giaBan<5100){
            a[i].xuat();
        }
    }
}


int main()
{
    XeHoi a[100];
    int n;
    do{
        cout<<"nhap so xe hoi: ";
        cin>>n;
    }
    while(n<0);

    for(int i=0;i<n;i++){
        cout<<"nhap thong tin xe "<<i+1<<": "<<endl;
        a[i].nhap();
    }
    cout<<"===THONG TIN DANH SACH XE HOI==="<<endl;
    cout<<"NhanHieu"<<setw(10)<<"hangSx"<<setw(10)<<"XuatXu"<<setw(10)<<"GiaBan"<<setw(10)<<"SoLuong"<<setw(10)<<"ThanhTien"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }

    Insert_nv(a,n);

    cout<<"nhung xe co gia nho hon 5200 la: "<<endl;

    tong_5100( a, n);

}
