#include <bits/stdc++.h>

using namespace std;

class tamGiac {
private:
    float a,b,c;
public:
    void nhap();
    void xuat();
    float P(float a,float b,float c){
        return a+b+c;
    };
    float S(float a,float b, float zc){
        float p = (a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    };
};
void tamGiac::nhap(){
    cout<<"nhap a,b,c"<<endl;
    cin>>a>>b>>c;
}

void tamGiac::xuat(){
    cout<<"P:"<<P(a,b,c);
    cout<<"S:"<<S(a,b,c);
}


int main()
{
    tamGiac a;
    a.nhap();
    a.xuat();
}
