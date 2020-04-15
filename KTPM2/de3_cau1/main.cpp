#include <bits/stdc++.h>

using namespace std;
class NHA{
protected:
    int namxd;
    double kinhphixd,dientich;
};

class NHACAOTANG : public NHA{
    friend void IN_SORT(NHACAOTANG a[],int n);
    friend void IN_sophong(NHACAOTANG a[],int n);
protected:
    int sotang,sophong;
    public:
    void nhap(){
        cout<<"nhap dien tich: ";
        cin>>dientich;
        cout<<"nhap nam xd: ";
        cin>>namxd;
        cout<<"nhap kinh phi xd: ";
        cin>>kinhphixd;
        cout<<"nhap so tang: ";
        cin>>sotang;
        cout<<"nhap so phong: ";
        cin>>sophong;
    }

    void xuat(){
        cout<<setw(15)<<dientich<<setw(15)<<namxd<<setw(15)<<kinhphixd<<setw(15)<<sotang<<setw(15)<<sophong<<endl;

    }

};

void IN_SORT(NHACAOTANG a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].dientich < a[j].dientich)
                a[i].xuat();
        }
    }
}

void IN_sophong(NHACAOTANG a[],int n){
    for(int i=0;i<n;i++){
        if(a[i].sophong > 5)
            a[i].xuat();
    }
}

int main()
{
    int n;
    do{
        cout<<"nhap so nha: ";
        cin>>n;
    }while(n<0 || n>20);
    NHACAOTANG a[n];
    for(int i=0;i<n;i++){
        cout<<"nhap nha cao tang thu "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<setw(15)<<"dien tich"<<setw(15)<<"nam xd"<<setw(15)<<"kinh phi xd"<<setw(15)<<"so tang"<<setw(15)<<"so phong"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }

    IN_SORT(a,n);
    cout<<"sau khi sap xep:"<<endl;
    cout<<setw(15)<<"dien tich"<<setw(15)<<"nam xd"<<setw(15)<<"kinh phi xd"<<setw(15)<<"so tang"<<setw(15)<<"so phong"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    cout<<endl;
    cout<<"nha co so phong > 5: "<<endl;
    IN_sophong(a,n);


}
