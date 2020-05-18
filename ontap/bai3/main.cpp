#include <bits/stdc++.h>

using namespace std;
class TAISAN{
    friend class PHIEU;
protected:
    char tentaisan[50],tinhtrang[50];
    int soluong;
public:
    void nhap(){
        cout<<"nhap ten tai san:";
        fflush(stdin);
        gets(tentaisan);
        cout<<"nhap so luong:";
        cin>>soluong;
        cout<<"nhap tinh trang:";
        fflush(stdin);
        gets(tinhtrang);
    }
    void xuat(){
        cout<<setw(15)<<tentaisan<<setw(15)<<soluong<<setw(15)<<tinhtrang<<endl;
    }
};

class PHIEU : public TAISAN{
    char maphieu[50],ngaykiem[50],nhanvien[50],chucvu[50],tenphong[50],maphong[50],truongphong[50];
    int sotaisan;
    TAISAN x[100];

public:
    void nhap(){
        cout<<"nhap ma phieu:";
        fflush(stdin);
        gets(maphieu);
        cout<<"nhap ngay kiem:";
        fflush(stdin);
        gets(ngaykiem);
        cout<<"nhap nhan vien:";
        fflush(stdin);
        gets(nhanvien);
        cout<<"nhap chuc vu:";
        fflush(stdin);
        gets(chucvu);
        cout<<"nhap ten phong:";
        fflush(stdin);
        gets(tenphong);
        cout<<"nhap ma phong:";
        fflush(stdin);
        gets(maphong);
        cout<<"nhap truong phong:";
        fflush(stdin);
        gets(truongphong);
        cout<<"nhap so tai san =====>";
        cin>>sotaisan;
        for(int i=0;i<sotaisan;i++){
            x[i].nhap();
        }
    }

    void xuat(){
        cout<<"ma phieu: "<<maphieu<<endl;
        cout<<"ngay kiem: "<<ngaykiem<<endl;
        cout<<"nhan vien: "<<nhanvien<<endl;
         cout<<"chuc vu: "<<chucvu<<endl;
         cout<<"ten phong: "<<tenphong<<endl;
         cout<<" ma phong: "<<maphong<<endl;
         cout<<"truong phong: "<<truongphong<<endl;

         for(int i=0;i<sotaisan;i++){
            x[i].xuat();
         }

         cout<<"tong so luong :"<<TONGSOLUONG()<<endl;
    }

    int TONGSOLUONG(){
        int tong =0;
        for(int i=0;i<sotaisan;i++){
                tong += x[i].soluong;

        }
    }


};
int main()
{
    PHIEU a;
    a.nhap();
    cout<<"thong tin phieu:";
    a.xuat();
}
