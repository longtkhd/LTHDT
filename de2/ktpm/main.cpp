#include <bits/stdc++.h>

using namespace std;
class PHIEU;
class HANG{
    friend void sapxep(PHIEU &a);
    friend void IN_SO(PHIEU &a);
    friend class PHIEU;
    char tenhang[50],mahang[50];
    float dongia,soluong;
public:
    float thanhtien(){
        return soluong*dongia;
    }

};
class PHIEU{
    friend void sapxep(PHIEU &a);
    friend void IN_SO(PHIEU &a);
    char maphieu[50],ngaytl[50],nguoithanhlap[50],khachhang[50];
    HANG hang[100];
    int sohang;
public:
    void nhap(){
        cout<<"nhap ma phieu:";
        fflush(stdin);
        gets(maphieu);
        cout<<"nhap ngay tl:";
        fflush(stdin);
        gets(ngaytl);
        cout<<"nhap nguoi tl:";
        fflush(stdin);
        gets(nguoithanhlap);
        cout<<"nhap khach hang:";
        fflush(stdin);
        gets(khachhang);

        cout<<"=========="<<endl;

        cout<<"nhap so hang:";
        cin>>sohang;
        for(int i=0;i<sohang;i++){
            cout<<"nhap ten hang:";
            fflush(stdin);
            gets(hang[i].tenhang);
            cout<<"nhap ma hang:";
            fflush(stdin);
            gets(hang[i].mahang);
            cout<<"nhap don gia:";
            cin>>hang[i].dongia;
            cout<<"nhap so luong:";
            cin>>hang[i].soluong;


        }




    }

    void xuat(){

        cout<<"ma phieu: "<<maphieu<<endl;
        cout<<"ngaytl: "<<ngaytl<<endl;
        cout<<"nguoitl: "<<nguoithanhlap<<endl;
        cout<<"khach hang: "<<khachhang<<endl;

        for(int i=0;i<sohang;i++){
            cout<<setw(15)<<hang[i].tenhang<<setw(15)<<hang[i].mahang<<setw(15)<<hang[i].dongia<<setw(15)<<hang[i].soluong<<setw(15)<<hang[i].thanhtien()<<endl;

        }

    }


};

void IN_SO(PHIEU &a){
    int MAX = 0,tong=0;
    for(int i=0;i<a.sohang;i++){
        if(a.hang[i].soluong > MAX)
            MAX = a.hang[i].soluong;
    }
    for(int i=0;i<a.sohang;i++){
        if(a.hang[i].soluong == MAX)
            tong+=1;
    }
    cout<<"so hang co sl lon nhat la: "<<tong<<endl;
}

void sapxep(PHIEU &a){
    for(int i=0;i<a.sohang;i++){
        for(int j=0;j<a.sohang;j++){
            if(a.hang[i].thanhtien() > a.hang[i].thanhtien())
                swap(a.hang[i],a.hang[j]);
        }
    }
}
int main()
{
    PHIEU a;
    a.nhap();
    a.xuat();
    IN_SO(a);
    sapxep(a);
}
