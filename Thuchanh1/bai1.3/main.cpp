#include <bits/stdc++.h>

using namespace std;

class ptb1
{
private:
    float a,b;
public:
    void nhap();
    void xuat();
    float kq(float a,float b)
    {
        if(a==0)
        {
            if(b==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }


    }
    else
    {
        return +(-b/a);
        }
    }
};

void ptb1::nhap()
{
    cout<<"nhap a,b"<<endl;
    cin>>a>>b;
};
void ptb1::xuat()
{
    if(kq(a,b)==1)
    {
        cout<<"pt vo so n";
    }
    else if(kq(a,b)==0)
    {
        cout<<"pt vo nghiem";
    }
    else
        cout<<"nghiem cua pt la"<<kq(a,b);
};

int main()
{
    ptb1 p;
    p.nhap();
    p.xuat();
}
