#include <bits/stdc++.h>

using namespace std;
class NHANVIEN {
protected:
    string maNv,tenNv;

};
class NHANVIENCB : public NHANVIEN{
    friend void IN_luongcb(NHANVIENCB a[],int n);
protected:
    int hesoluong,hesocv;
public:
    void nhap(){
        cout<<"nhap ma nv: "; fflush(stdin);getline(cin,maNv);
        cout<<"nhap ma ten nv: "; fflush(stdin);getline(cin,tenNv);
        cout<<"nhap hesoluong: "; cin>>hesoluong;
        cout<<"nhap hesocv : ";cin>>hesocv;
    }
    void xuat(){
        cout<<"ma nv"<<maNv<<endl;
        cout<<"ten nv"<<tenNv<<endl;
        cout<<"he so luong"<<hesoluong<<endl;
        cout<<"he so cv"<<hesocv<<endl;
        cout<<"luong "<<(1.0 + hesoluong + hesocv)*1000<<endl;


    }
    int getluongcb(){
        return (1.0 + hesoluong + hesocv)*1000;
    }

};
class NHANVIENHD : public NHANVIEN{
protected:
    int tiencongld,songay,hesovuot;
public:
    void nhap(){
         cout<<"nhap ma nv hd: "; fflush(stdin);getline(cin,maNv);
        cout<<"nhap ma ten nv hd: "; fflush(stdin);getline(cin,tenNv);
        cout<<"tien cong ld"; cin>>tiencongld;
        cout<<"so ngay / m: ";cin>>songay;
        cout<<"he so vuot" ;cin>>hesovuot;
    }
    void xuat(){
        cout<<"ma nv hd"<<maNv<<endl;
        cout<<"ten nv hd"<<tenNv<<endl;
        cout<<"tien cong ld"<<tiencongld<<endl;
        cout<<"so ngay"<<songay<<endl;
        cout<<"he so vuot"<<hesovuot<<endl;
        cout<<"luong "<<(tiencongld*songay*(1+hesovuot));
    }
    int getluonghd(){
        return tiencongld*songay*(1+hesovuot);
    }
};

void IN_hightcb(NHANVIENCB a[],int n){
    int MAX = 0;
    for(int i=0;i<n;i++){
            if(a[i].getluongcb()>MAX)
               MAX = a[i].getluongcb();

    }
    for(int i=0;i<n;i++){
        if(a[i].getluongcb() == MAX)
            a[i].xuat();
    }
}


void IN_highthd(NHANVIENHD b[],int m){
    int MAX = 0;
    for(int i=0;i<m;i++){
            if(b[i].getluonghd()>MAX)
               MAX = b[i].getluonghd();

    }
    for(int i=0;i<m;i++){
        if(b[i].getluonghd() == MAX)
            b[i].xuat();
    }
}


int main()
{
    int n,m;
    cout<<"nhap so nhan vien cb";
    cin>>n;
    cout<<"nhap so nhan vien hd";
    cin>>m;
    NHANVIENCB a[n];
    NHANVIENHD b[m];

    for(int i=0;i<n;i++){
        cout<<"nhap nv cb thu " <<i +1<<endl;
        a[i].nhap();
    }
    cout<<"thong tin nv cb===================>"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();

    }

    for(int i=0;i<n;i++){
        cout<<"nhap nv hd thu " <<i +1<<endl;
        b[i].nhap();
    }
     cout<<"thong tin nv hd===================>"<<endl;

    for(int i=0;i<n;i++){
        b[i].xuat();

    }

    cout<<"nhan vien cb luong cao nhat"<<endl;
    IN_hightcb(a,n);
    cout<<"nhan vien hd luong cao nhat"<<endl;
    IN_hightcb(a,n);
    IN_highthd(b,m);



}
