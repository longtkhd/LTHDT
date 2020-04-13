#include <bits/stdc++.h>

using namespace std;
class SINHVIEN{
protected:
    string Hoten,sbd;
};
class DIEMTHI : public SINHVIEN{
protected:
    int kq1,kq2;
public:
    void nhap(){
         cout<<"nhap Hoten:"<<endl;
            fflush(stdin);
            getline(cin,Hoten);
            cout<<"nhap sbd:"<<endl;
            fflush(stdin);
            getline(cin,sbd);
            cout<<"nhap kq1"<<endl;
            cin>>kq1;
            cout<<"nhap kq2"<<endl;
            cin>>kq2;
    }

            void xuat(){
            cout<<setw(15)<<Hoten<<setw(15)<<sbd<<setw(15);
        }



};
class KETQUA : public DIEMTHI{


    public:
        float tong(){
           return  kq1 + kq2;
        }
        void nhap(){
            DIEMTHI::nhap();

        }
        void xuat(){
            DIEMTHI::xuat();

            cout<<tong();
        }




};
int main()
{
    int n;
    do{
        cout<<"nhap so sv:"<<endl;
        cin>>n;
    }while(n<0 || n>100);
    KETQUA a[n];
    for(int i=0;i<n;i++){

        a[i].nhap();
    }

    cout<<setw(15)<<"ho ten"<<setw(15)<<"sbd"<<setw(15)<<"tong diem"<<endl;
    for(int i=0;i<n;i++){

        a[i].xuat();
    }

}
