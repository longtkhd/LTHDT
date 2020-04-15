#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class NHANVIEN {
protected:
    char ten[100],chucvu[100];
};
class PHONG{
protected:
    char tenphong[50],maphong[50],truongphong[50];
};
class TAISAN {
        friend void SORTTS(PHIEU &a);
        friend class PHIEU;
     char tentaisan[50],tinhtrang[50];
    int soluong;
public:
    void nhap(){
        cout<<"nhap ten tai san: ";
        fflush(stdin);
        gets(tentaisan);
        cout<<"nhap so luong";
        cin>>soluong;
        cout<<"nhap tinh trang: ";
        fflush(stdin);
        gets(tinhtrang);
    }

    void xuat(){
        cout<<setw(15)<<tentaisan<<setw(15)<<soluong<<setw(15)<<tinhtrang<<endl;
    }




};

class PHIEU: public NHANVIEN,public PHONG{
    friend void SORTTS(PHIEU &a);
protected:
    char maphieu[10];
    int ngay,thang,nam,sotaisan;;
    TAISAN TS[100];
public:
    void nhap(){
        cout<<"nhap ma phieu";
        fflush(stdin);
        gets(maphieu);
        cout<<"nhap ngay kiem ke: "<<endl;
        cin>>ngay>>thang>>nam;
        cout<<"nhap ten ng kiem ke: ";
        fflush(stdin);
        gets(ten);
        cout<<"nhap chuc vu";
        fflush(stdin);
        gets(chucvu);
        cout<<"nhap truong phong";
        fflush(stdin);
        gets(truongphong);
        cout<<"nhap so tai san"<<endl;
        cin>>sotaisan;
        for(int i=0;i<sotaisan;i++){
            TS[i].nhap();
        }

    }
    void xuat(){
        cout<<"ma phieu: "<<maphieu<<endl;
        cout<<"ngay kiem ke: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
        cout<<"nguoi kiem ke: "<<ten<<endl;
        cout<<"chuc vu : "<<chucvu<<endl;
        cout<<"nhap truong phong "<<truongphong<<endl;
        cout<<"thong tin tai san========="<<endl;
        for(int i=0;i<sotaisan;i++){
                TS[i].xuat();

        }

        int tong =0;
    for(int i=0;i<sotaisan;i++){
        tong+= TS[i].soluong;
    }
    cout<<"tong so luong :"<<tong;
    }



};

void SORTTS(PHIEU &a){
    for(int i=0;i<a.sotaisan;i++){
        for(int j=i+1;j<a.sotaisan;j++){
            if(a.TS[i].soluong > a.TS[j].soluong)
                swap(a.TS[i],a.TS[j]);
        }

    }
}


int main()
{
    PHIEU a;
    a.nhap();
    cout<<"thong tin phieu================"<<endl;
    a.xuat();

    SORTTS(a);
    a.xuat();

}
