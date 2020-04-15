#include <bits/stdc++.h>

using namespace std;
class SOPHUC{
    int phanthuc,phanao;
public:
    friend istream& operator>>(istream& in,SOPHUC &mimi);
    friend ostream& operator<<(ostream& out,SOPHUC mimi);
    SOPHUC operator+(SOPHUC mimi){
        SOPHUC tg;
        tg.phanthuc = phanthuc+mimi.phanthuc;
        tg.phanao = phanao + mimi.phanao;
        return tg;
    }
    SOPHUC operator-(SOPHUC mimi){
        SOPHUC tg;
        tg.phanthuc = phanthuc - mimi.phanthuc;
        tg.phanao = phanao - mimi.phanao;
        return tg;
    }
};

istream& operator>>(istream& in,SOPHUC &mimi){
    cout<<"nhap phan thuc:";
    in>>mimi.phanthuc;
    cout<<"nhap phan ao:";
    in>>mimi.phanao;

}
ostream& operator<<(ostream& out,SOPHUC mimi){
    out<<(mimi.phanthuc)<<"+ " <<mimi.phanao<<"* i"<<endl;
}
int main()
{
    SOPHUC SP1,SP2,SP3,SP4;
    cout<<"nhap so phuc 1:"<<endl;;
    cin>>SP1;
    cout<<"nhap so phuc 2: "<<endl;
    cin>>SP2;
    cout<<SP1;
    cout<<SP2;
    SP3 = SP1 + SP2;
    SP4 = SP1 - SP2;
    cout<<"SP1 + SP2: "<<SP3<<endl;
    cout<<"SP1 - SP2: "<<SP4<<endl;


}
