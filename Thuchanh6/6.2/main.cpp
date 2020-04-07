#include <bits/stdc++.h>

using namespace std;

class VEHICLE
{
protected:
 string NHANHIEU;
 int NAMSX;
 string HANGSX;
public:
 void NHAP();
 void XUAT();
};
class OTO : public VEHICLE
{
 int SOCHO;
 float DUNGTICH;
public:
 void NHAP();
 void XUAT();
};
class MOTO : public VEHICLE
{
 int PHANKHOI;
public:
 void NHAP();
 void XUAT();
};
void VEHICLE::NHAP()
{
 cout<<"Nhan hieu: "; fflush(stdin); getline(cin,NHANHIEU);
 cout<<"Nam SX: "; cin>>NAMSX;
 cout<<"Hang SX "; fflush(stdin); getline(cin,HANGSX);
}
void VEHICLE::XUAT()
{
 cout<<"Nhan hieu: "<<NHANHIEU<<endl;
 cout<<"Nam SX: "<<NAMSX<<endl;
 cout<<"Hang SX "<<HANGSX<<endl;
}
void OTO::NHAP()
{
 VEHICLE::NHAP();
 cout<<"So cho: "; cin>>SOCHO;
 cout<<"Dung tich: "; cin>>DUNGTICH;
}
void OTO::XUAT()
{
 VEHICLE::XUAT();
 cout<<"So cho: "<<SOCHO<<endl;
 cout<<"Dung tich: "<<DUNGTICH<<endl<<endl;
}
void MOTO::NHAP()
{
 VEHICLE::NHAP();
 cout<<"Phan khoi: "; cin>>PHANKHOI;
}
void MOTO::XUAT()
{
 VEHICLE::XUAT();
 cout<<"Phan khoi: "<<PHANKHOI<<endl;
}
int main()
{
 OTO a; MOTO b;
 cout<<"Nhap thong tin OTO:"<<endl;
 a.NHAP();
 cout<<"Nhap thong tin MOTO:"<<endl;
 b.NHAP();
 cout<<endl<<"OTO vua nhap:"<<endl;
 a.XUAT();
 cout<<"MOTO vua nhap:"<<endl;
 b.XUAT();
 return 0;
}
