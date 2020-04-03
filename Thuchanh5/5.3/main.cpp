#include <bits/stdc++.h>

using namespace std;

class Array
{
    int *Value, n;
public:
    Array()
    {
        n=0;
    }
    Array(int l)
    {
        n=l;
        Value=(int*) malloc(sizeof(int)*n);
        for(int i=0; i<n; i++)
            Value[i]=0;
    }
    ~Array()
    {
        n=0;
        delete[] Value;
    }
    Nhap()
    {
        cout<<"n=";
        cin>>n;
        if(Value == NULL) Value = new int[n];
        for(int i=0; i<n; i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>Value[i];
        }
    }
    Xuat()
    {
        cout<<"Mang vua nhap la: "<<endl;
        for(int i=0; i<n; i++)
            cout<<Value[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Array mang(2);
    mang.Xuat();

    mang.Nhap();
    mang.Xuat();
    return 0;
}
