#include <bits/stdc++.h>

using namespace std;
class KHOA{
    friend class TRUONGDH;
    char makhoa[50],tenkhoa[50],truongkhoa[50];
};

class BAN{
    friend class TRUONGDH;
protected:

    char maban[50],tenban[50],ngaytlban[50];
};
class TRUONGDH{
    KHOA x[100];
    int n;
    BAN y[100];
    int m;
public:
    void nhap(){
        cout<<"nhap so khoa:";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"nhap ma khoa:";
            fflush(stdin);
            gets(x[i].makhoa);
            cout<<"nhap ten khoa:";
            fflush(stdin);
            gets(x[i].tenkhoa);
            cout<<"nhap truong khoa:";
            fflush(stdin);
            gets(x[i].truongkhoa);
        }

        cout<<"nhap so ban:";
        cin>>m;
        for(int i=0;i<m;i++){
            cout<<"nhap ma ban:";
            fflush(stdin);
            gets(y[i].maban);
            cout<<"nhap ten ban:";
            fflush(stdin);
            gets(y[i].tenban);
            cout<<"nhap ngay tl ban:";
            fflush(stdin);
            gets(y[i].ngaytlban);
        }
    }

    void xuat(){
        for(int i=0;i<n;i++){
            cout<<setw(15)<<x[i].makhoa<<setw(15)<<x[i].tenkhoa<<setw(15)<<x[i].truongkhoa<<endl;
        }

        for(int i=0;i<m;i++){

            cout<<setw(15)<<y[i].maban<<setw(15)<<y[i].tenban<<setw(15)<<y[i].ngaytlban<<endl;
        }
    }
};

class TRUONG : public TRUONGDH{
    char matruong[50],tentruong[50],diachi[50];
    public:
    void nhap(){
        cout<<"nhap ma truong:";
        fflush(stdin);
        gets(matruong);
        cout<<"nhap ten truong:";
        fflush(stdin);
        gets(tentruong);
        cout<<"nhap dia chi:";
        fflush(stdin);
        gets(diachi);
        TRUONGDH::nhap();
    }

    void xuat(){
        cout<<"ma truong: "<<matruong<<endl;


        cout<<"ten truong: "<<tentruong<<endl;

        cout<<"dia chi truong: "<<diachi<<endl;

        TRUONGDH::xuat();
    }
};
int main()
{
    TRUONG a;
    a.nhap();
    cout<<"thong tin: ==============>"<<endl;
    a.xuat();
}
