#include <bits/stdc++.h>

using namespace std;
class SINHVIEN
{
    string Masv,Hoten;
    float DiemToan,DiemLy,DiemHoa;
public:
    void nhap(){
        cout<<"nhap ma sinh vien: ";
        cin.ignore();
        getline(cin,Masv);
        cout<<"nhap ho va ten: ";
        getline(cin,Hoten);
        cout<<"nhap diem toan: ";
        cin>>DiemToan;
        cout<<"nhap diem ly: ";
        cin>>DiemLy;
        cout<<"nhap diem hoa: ";
        cin>>DiemHoa;
    }
    float TongDiem(){
        return DiemToan + DiemLy + DiemHoa;
    }
    void xuat(){
        cout<<setw(15)<<Masv<<setw(15)<<Hoten<<setw(15)<<DiemToan<<setw(15)<<DiemLy<<setw(15)<<DiemHoa<<setw(15)<<TongDiem()<<endl;
    }
};
int main()
{
    int n;
    cout<<"nhap vao so sinh vien:"<<endl;
    cin>>n;
    SINHVIEN a[n];
    for (int i=0;i<n;i++){
        a[i].nhap();
    }

    cout<<setw(15)<<"Ma sv"<<setw(15)<<"Ho ten"<<setw(15)<<"Diem Toan"<<setw(15)<<"Diem ly"<<setw(15)<<"Diem Hoa"<<setw(15)<<"tong diem"<<endl;
    //SORT
for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i].TongDiem()>a[j].TongDiem())
            {
                swap(a[i],a[j]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
}
