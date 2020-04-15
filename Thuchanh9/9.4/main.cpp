#include <bits/stdc++.h>

using namespace std;
class TAMTHUC{
    int a,b,c;
public:

    friend ostream& operator << (ostream& out,TAMTHUC mimi);
    TAMTHUC operator+(TAMTHUC mimi){
        TAMTHUC tg;
        tg.a = a + mimi.a;
        tg.b = b + mimi.b;
        tg.c = c + mimi.c;
        return tg;
    }
    TAMTHUC operator-(TAMTHUC mimi){
        TAMTHUC tg;
        tg.a = a - mimi.a;
        tg.b = b - mimi.b;
        tg.c = c - mimi.c;
        return tg;
    }
    TAMTHUC operator-(){
        TAMTHUC tg;
        tg.a = -a;
        tg.b = -b;
        tg.c = -c;
        return tg;
    }
    TAMTHUC(int A,int B,int C){
        a=A;
        b=B;
        c=C;
    }
    TAMTHUC(){
        a=b=c=0;
    }

};

ostream& operator << (ostream& out,TAMTHUC mimi){
    out<<mimi.a<<"*x2 +"<<mimi.b<<"*x +"<<mimi.c<<endl;
}


int main()
{
    TAMTHUC a(1,2,3),b(2,3,4);
    a= -a;
    b= -b;
    cout<<"Tam thuc a da dao dau: "<<a<<endl;
    cout<<"Tam thuc b da dao dau: "<<b<<endl;
    cout<<"Tam thuc TONG: "<<a+b<<endl;
    cout<<"Tam thuc HIEU: "<<a-b<<endl;

}
