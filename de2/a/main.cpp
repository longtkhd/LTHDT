#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
#define max 100
using namespace std;
class Sinh_vien;
class date
{ private :
	int d, m, y;
  public:
  	void nhap()
  	{ cout<<"Nhap vao ngay thang nam :";
	  cin>>d>>m>>y;
	}
	void xuat()
	{ cout<<d<<"/"<<m<<"/"<<y;
	}
	friend void In_30_4(Sinh_vien sv[], int n);
	friend class Sinh_vien;
	friend void Xoa_1998(Sinh_vien sv[], int &n);
	friend void tongMin(Sinh_vien sv[],int n);
};
class Sinh_vien
{ private :
   char masv[15];
   char tensv[15];
   date ngaysinh;
   float diemtoan;
   float diemly;
   float diemhoa;
  public:
  	void nhap();
  	float tongdiem()
  	{ return diemtoan + diemly + diemhoa;
	  }
	void xuat();
	friend void tongMin(Sinh_vien sv[],int n);
	friend void In_30_4(Sinh_vien sv[],int n);
	friend void sapxep(Sinh_vien sv[],int n);
	friend void Xoa_1998(Sinh_vien sv[],int n);
};
void Sinh_vien::nhap()
{ cout<<"\nNhap ma sinh vien :";fflush(stdin); gets(masv);
  cout<<"\nNhap ten sinh vien :";fflush(stdin);gets(tensv);
  ngaysinh.nhap();
  cout<<"\nNhap diem toan :";cin>>diemtoan;
  cout<<"\nNhap diem ly :";cin>>diemly;
  cout<<"\nNhap diem hoa :";cin>>diemhoa;
}
void Sinh_vien::xuat()
{ cout<<masv<<setw(15)<<tensv<<setw(15);
  ngaysinh.xuat();
  cout<<setw(15)<<diemtoan<<setw(15)<<diemly<<setw(15)<<diemhoa<<setw(15)<<tongdiem();
}
void tongMin(Sinh_vien sv[],int n)
{ int tongMin = sv[0].tongdiem();
  for(int i=0;i<n;i++)
   { if(sv[i].tongdiem()<tongMin)
    { tongMin=sv[i].tongdiem();
    }
   }
   cout<<"\n\t==Thong tin cua sinh vien co tong diem thap nhat==\n";
   cout<<setw(15)<<left<<"masv";
		cout<<setw(15)<<left<<"tensv";
		cout<<setw(13)<<left<<"ngaysinh";
		cout<<setw(8)<<left<<"diemtoan";
		cout<<setw(8)<<left<<"diemly";
		cout<<setw(8)<<left<<"diemhoa";
		cout<<setw(8)<<left<<"tongdiem"<<endl;
}
void In_30_4(Sinh_vien sv[], int n)
{
	cout<<"\n\t==Thong tin cua cac sinh vien sinh ngay 30 thang 4==\n\n";
	cout<<setw(15)<<left<<"masv";
		cout<<setw(15)<<left<<"tensv";
		cout<<setw(13)<<left<<"ngaysinh";
		cout<<setw(8)<<left<<"Toan";
		cout<<setw(8)<<left<<"Ly";
		cout<<setw(8)<<left<<"Hoa";
		cout<<setw(8)<<left<<"tongdiem"<<endl;
	for(int i = 0; i < n; i++)
	{
		if(sv[i].ngaysinh.d == 30 && sv[i].ngaysinh.m == 4)
		{
			sv[i].xuat();
		}
	}
}
void sapxep(Sinh_vien sv[], int n)
{
	for(int i = 0; i < n; i ++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(sv[j].tensv < sv[i].tensv)
			{
				Sinh_vien temp = sv[j];
				sv[j] = sv[i];
				sv[i] = temp;
			}
		}
	}
	cout<<"\n\t==Thong tin sinh vien sau khi sap xep theo tang dan cua ten==\n";
	cout<<setw(15)<<left<<"MaSV";
		cout<<setw(15)<<left<<"TenSV";
		cout<<setw(13)<<left<<"NgaySinh";
		cout<<setw(8)<<left<<"dToan";
		cout<<setw(8)<<left<<"dLy";
		cout<<setw(8)<<left<<"dHoa"<<endl;
	for(int i = 0; i < n; i ++)
	{
		sv[i].xuat();
	}
}
void Xoa_1998(Sinh_vien sv[], int &n)
{
	for(int i = 0; i < n; i ++)
	{
		while(sv[i].ngaysinh.y == 1998)
		{
			for(int j=i;j<n;j++)
			{
                sv[j]=sv[j+1];
			}
            n--;
		}
	}
	cout<<"\n\t==Noi dung sau khi xoa sinh vien sinh nam 1998==\n";
	cout<<setw(15)<<left<<"MaSV";
		cout<<setw(15)<<left<<"TenSV";
		cout<<setw(13)<<left<<"NgaySinh";
		cout<<setw(8)<<left<<"dToan";
		cout<<setw(8)<<left<<"dLy";
		cout<<setw(8)<<left<<"dHoa";
		cout<<setw(8)<<left<<"tongdiem"<<endl;
	for(int i = 0; i < n; i ++)
	{
		sv[i].Xuat();
	}
}
main()
{ Sinh_vien sv[100];
  int n;
  cout<<"\nNhap so sinh vien n=";cin>>n;
  for(int i=0; i<n;i++)
  { cout<<"\nNhap sinh vien thu: "<<i+1;
    ns[i].nhap();
  }
  cout<<"\nThong tin sinh vien da nhap\n";
  cout<<"masv"<<setw(15)<<"tensv"<<setw(15)<<"ngaysinh"<<setw(15)<<"diemtoan"<<setw(15)<<"diemly"<<setw(15)<<"diemhoa"<<<<setw(15)<<"tongdiem"<<"\n";
  for(int i=0; i<n; i++)
  { ns[i].xuat();
    cout<<"\n";
  }
  for(int i = 0; i < n; i ++)
	{
		sv[i].Xuat();
	}
//Tim tong diem thap nhat
	tongMin(sv, n);
//Tim sinh vien sinh ngay 30 thang 4
	In_30_4(sv, n);
//Sap xep
	sapXep(sv, n);
//Xoa sinh vien sinh nam 1998
	Xoa_1998(sv, n);

	return 0;
}
