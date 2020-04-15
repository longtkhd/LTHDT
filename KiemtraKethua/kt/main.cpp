#include <bits/stdc++.h>

using namespace std;


class NHANVIEN{
    protected:
    string tenNv,chucVu;

};
class PHONG{
    protected:
    string tenPhong,maPhong,truongPhong;
};

class TAISAN {


    string tenTaisan,tinhTrang;
    int soLuong;


    public:
         friend void sapxep(TAISAN x[],int sotaisan);
         friend void IN_tong(TAISAN x[],int sotaisan);
            friend class PHIEU;

        void nhap(){
            cout<<"nhap ten tai san:";fflush(stdin); getline(cin,tenTaisan);
            cout<<"nhap so luong:";cin>>soLuong;
            cout<<"nhap ten tinh trang:";fflush(stdin); getline(cin,tinhTrang);


        }

        void xuat(){
            cout<<setw(15)<<tenTaisan<<setw(15)<<soLuong<<setw(15)<<tinhTrang<<endl;
        }


};

class PHIEU: public NHANVIEN,public PHONG{

    string maPhieu;
    int ngay,sotaisan,tongsoluong=0;
    TAISAN x[100];
    public:
        friend void sapxep(TAISAN x[],int sotaisan);
        friend void IN_tong(TAISAN x[],int sotaisan);
        friend class TAISAN;
    void nhap(){
            cout<<"nhap ma phieu:"<<endl; fflush(stdin); getline(cin,maPhieu);
            cout<<"nhap ngay:" ; cin>>ngay;
            cout<<"nhap ten nv:";fflush(stdin); getline(cin,tenNv);
            cout<<"nhap chucVu:";fflush(stdin); getline(cin,chucVu);
            cout<<"nhap ten phong:";fflush(stdin); getline(cin,tenPhong);
            cout<<"nhap ma phong:";fflush(stdin); getline(cin,maPhong);
            cout<<"nhap truong Phong:";fflush(stdin); getline(cin,truongPhong);
            cout<<"nhap so tai san";cin>>sotaisan;
            for(int i=0;i<sotaisan;i++){
                    x[i].nhap();

            }
    }
    void xuat(){
            cout<<"ma phieu:"<<maPhieu<<endl;
            cout<<"ma ngay:"<<ngay<<endl;
            cout<<"ten nv:"<<tenNv<<endl;
            cout<<"chuc Vu:"<<chucVu<<endl;
            cout<<"ten phong:"<<tenPhong<<endl;
            cout<<"ma phong:"<<maPhong<<endl;
            cout<<"truong phong: "<<truongPhong<<endl;

            cout<<"tai san:============>"<<endl;
            cout<<setw(15)<<"ten"<<setw(15)<<"so luong"<<setw(15)<<"tinh trang"<<endl;
            for(int i=0;i<sotaisan;i++){
                x[i].xuat();
            }






    }

};

void sapxep(TAISAN x[],int sotaisan){
    for(int i=0;i<sotaisan;i++){
        for(int j=i+1;j<sotaisan;j++){
            if(x[i].soLuong > x[j].soLuong){
                swap(x[i],x[j]);
            }
        }
    }
}






int main()
{
    PHIEU a;
    a.nhap();
    a.xuat();
    sapxep(a.x,a.sotaisan);



}
