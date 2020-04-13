#include<bits/stdc++.h>
using namespace std;
float luongcb_cb;
float luongcb_gv;
class canbo{
	protected:
		string macb;
		string madv;
		int ns;
		float hsl;
		float pc_anca;
		string bh;
	public:
		void nhap(){
			cout<<"Nhap ma can bo : ";
			fflush(stdin);
			getline(cin,macb);
			cout<<"Nhap ma don vi : ";
			fflush(stdin);
			getline(cin,madv);
			cout<<"Nhap nam sinh : ";
			cin>>ns;
			cout<<"Nhap he so luong : ";
			cin>>hsl;
			cout<<"Nhap phu cap an ca : ";
			cin>>pc_anca;
			cout<<"Nhap bao hiem : ";
			fflush(stdin);
			getline(cin,bh);

		}
		void xuat(){
			cout<<"\nMa cb : "<<macb;
			cout<<"\nMa dvi : "<<madv;
			cout<<"\nNam sinh : "<<ns;
			cout<<"\nHe so luong : "<<hsl;
			cout<<"\nTien pc an ca : "<<pc_anca;
			cout<<"Bao hiem : "<<bh;

		};
		float luong_cb(){
			float luong_cb;
			luong_cb = hsl*luongcb_cb+pc_anca;
			return luong_cb;
		};
};
class giangvien:public canbo{
	private:
		int choice;
		float pc_lop;
		float pc_dochai;
	public:
		void nhap(){
			canbo::nhap();
			cout<<"Co pc doc hai k : ";
			cin>>choice;
			cout<<endl;
		}
		void xuat(){
			canbo::xuat();
			pc_lop=0.25*luongcb_gv;
			cout<<"Tien pc lop : "<<pc_lop;
			if(choice==1){
				pc_dochai=luongcb_gv*0.1;
				cout<<"\nTien pc doc hai : "<<pc_dochai;
			}
		}
		float luong_gv(){
			pc_lop = 0.25*luongcb_gv;
			float luong_gv;
			luong_gv = (luongcb_gv*hsl)+pc_anca+pc_dochai+pc_lop;
			return luong_gv;

		}
};
int main(){
	canbo a[50];
	giangvien b[50];
	int m, n;
	cout<<"\nNhap so can bo : ";
	cin>>m;
	cout<<"\nNhap so giang vien : ";
	cin>>n;
	cout<<"\nNhap luong co ban can bo : ";
	cin>>luongcb_cb;
	cout<<"\nNhap luong cban gv : ";
	cin>>luongcb_gv;
	for(int i=0;i<n;i++){
		cout<<"\nNhap tt can bo thu : "<<i+1;
		a[i].nhap();
		cout<<endl;
	}
	for(int i=0;i<m;i++){
		cout<<"\nNhap tt gv thu : "<<i+1;
		b[i].nhap();
		cout<<endl;
	}
	cout<<"\nThong tin cbo va gv : ";
	for(int i=0;i<m;i++){
		a[i].xuat();
		cout<<"\nLuong cb "<<i+1<<" : "<<a[i].luong_cb();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		b[i].xuat();
		cout<<"\nLuong gv "<<i+1<<" : "<<b[i].luong_gv();
		cout<<endl;
	}
	cout<<"\nDs cbo gv pai dong thue thu nhap : ";
	for(int i=0;i<m;i++){
		if(a[i].luong_cb()>5){
			a[i].xuat();
		}
	}
	for(int i=0;i<n;i++){
		if(b[i].luong_gv()>5){
			b[i].xuat();
		}
	}
}
