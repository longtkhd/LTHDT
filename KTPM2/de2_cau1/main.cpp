#include <bits/stdc++.h>

using namespace std;
class NHANSU{

protected:
    char hoten[50],gioitinh[5],diachi[100];
    int ngay,thang,nam;
};

class CONGCHUC : public NHANSU {
    friend void IN_highter(CONGCHUC a[],int n);
    friend void SORT_GIAM(CONGCHUC a[],int n);
protected:
    char nganhnghe[20],trinhdo[50];
    int namvaoCQ;
    float hsluong,phcap;
public:
    void nhap(){
        cout<<"nhap ho ten: ";
        fflush(stdin);
        gets(hoten);
        cout<<"nhap gioi tinh: ";
        fflush(stdin);
        gets(gioitinh);
        cout<<"nhap dia chi: ";
        fflush(stdin);
        gets(diachi);
        cout<<"nhap ngay/thang/nam:"<<endl;
        cin>>ngay>>thang>>nam;
        cout<<"nhap nganh nghe"<<endl;
        fflush(stdin);
        gets(nganhnghe);
        cout<<"nhap trinh do: ";
        fflush(stdin);
        gets(trinhdo);
        cout<<"nhap nam vao:";
        cin>>namvaoCQ;
        cout<<"nhap hs luong:";
        cin>>hsluong;
        cout<<"nhap phu cap: ";
        cin>>phcap;

    }
    void xuat(){
        cout<<setw(15)<<hoten<<setw(15)<<gioitinh<<setw(15)<<diachi<<setw(10)<<ngay<<"/"<<thang<<"/"<<nam<<setw(15)<<nganhnghe<<setw(15)<<trinhdo<<setw(15)<<namvaoCQ<<setw(15)<<hsluong<<setw(15)<<phcap<<setw(15)<<thunhap()<<endl;

    }

    float thunhap(){
        return hsluong * 830 + phcap;
    }
};

void IN_highter(CONGCHUC a[],int n){
    int MAX = 0;
    for(int i=0;i<n;i++){
        if(a[i].thunhap() >MAX)
            MAX = a[i].thunhap();

    }
    for(int i=0;i<n;i++){
            if(a[i].thunhap()== MAX)
                a[i].xuat();

    }

}

void SORT_GIAM(CONGCHUC a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(a[i].hoten,a[j].hoten)<0)
                swap(a[i],a[j]);
        }
    }
}
int main()
{
    int n;
    do{
        cout<<"nhap n: "<<endl;
        cin>>n;
    }while(n>50);
    CONGCHUC a[n];
    for(int i=0;i<n;i++){
        cout<<"nhap cong chuc thu: "<<i+1<<endl;
        a[i].nhap();
    }

    cout<<"thong tin:======================"<<endl;
    cout<<setw(15)<<"ho ten"<<setw(15)<<"gioi tinh"<<setw(15)<<"dia chi"<<setw(15)<<"ngaysinh"<<setw(15)<<"nganh nghe"<<setw(15)<<"trinh do"<<setw(15)<<"nam vao"<<setw(15)<<"he so luong"<<setw(15)<<"phu cap"<<setw(15)<<"thu nhap"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }

    cout<<"nv co thu nhap cao nhat:"<<endl;
    IN_highter(a,n);
    SORT_GIAM(a,n);
    cout<<"danh sach sau sx: ================"<<endl;
    cout<<setw(15)<<"ho ten"<<setw(15)<<"gioi tinh"<<setw(15)<<"dia chi"<<setw(15)<<"ngaysinh"<<setw(15)<<"nganh nghe"<<setw(15)<<"trinh do"<<setw(15)<<"nam vao"<<setw(15)<<"he so luong"<<setw(15)<<"phu cap"<<setw(15)<<"thu nhap"<<endl;
     for(int i=0;i<n;i++){
        a[i].xuat();
    }


}
