#include <bits/stdc++.h>

using namespace std;
class KHOA{
    friend class TRUONGDH;
    char makhoa[50],tenkhoa[50],truongkhoa[50];




};
class BAN {
    friend class TRUONGDH;
    char maban[50],tenban[50];
    int ngaythanhlap;
public:

};

class TRUONGDH{
    char matruong[50],tentruong[50];
    int sokhoa,soban;
    KHOA x[100];
    BAN y[100];
public:
    void nhap(){
        cout<<"nhap ma truong";
        fflush(stdin);
        gets(matruong);
        cout<<"nhap ten truong";
        fflush(stdin);
        gets(tentruong);
        cout<<"so khoa";
        cin>>sokhoa;
        cout<<"so ban";
        cin>>soban;
        for(int i=0;i<sokhoa;i++){
        cout<<"nhap ma khoa";
        fflush(stdin);
        gets(x[i].makhoa);
        cout<<"nhap ten khoa";
        fflush(stdin);
        gets(x[i].tenkhoa);
        cout<<"truong khoa";
        fflush(stdin);
        gets(x[i].truongkhoa);
        }

        for(int i=0;i<soban;i++){
            cout<<"nhap ma ban: ";
            fflush(stdin);
            gets(y[i].maban);
            cout<<"nhap ten ban:";
            fflush(stdin);
            gets(y[i].tenban);
            cout<<"nhap ngay thanh lap:";
            cin>>y[i].ngaythanhlap;
        }
    }
};
int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    TRUONGDH a[n];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
}
