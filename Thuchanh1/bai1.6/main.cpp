#include <bits/stdc++.h>

using namespace std;
class student{
private:
    string fullName,gioitinh,xeploai;
    int ngay,thang,nam;
    float tb;
public:
    void nhap();
    void xuat();


};

void student::nhap(){

    cout<<"fullName,gender,xep loai:"<<endl;

      getline(std::cin,fullName);

      getline(std::cin,gioitinh);

      getline(std::cin,xeploai);


}
void student :: xuat(){
    cout<<fullName<<" "<<gioitinh<<" "<<xeploai;

}
int main()
{
    student a;
    a.nhap();
    a.xuat();
}
