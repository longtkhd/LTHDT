#include <bits/stdc++.h>

using namespace std;
class MANG{
    float a[100];
    int n;
public:
    MANG operator--(){
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
             if(a[i] > a[j])
                swap(a[i],a[j]);
           }
        }
    }
    MANG operator++(){

        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
             if(a[i] < a[j])
                swap(a[i],a[j]);
           }
        }


    }
    friend ostream& operator<<(ostream& out,MANG mimi);
    friend istream& operator>>(istream& in,MANG &mimi);

};


istream& operator>>(istream& in,MANG &mimi){
    cout<<"nhap n:";
    in>>mimi.n;
    cout<<"nhap mang:"<<endl;
    for(int i=0;i<mimi.n;i++){
        in>>mimi.a[i];

    }

}
ostream& operator<<(ostream& out,MANG mimi){
    for(int i=0;i<mimi.n;i++){
        out<<"a["<<i<<"]:"<<mimi.a[i]<<" "<<endl;

    }
}
int main()
{
   MANG a;
   cin>>a;
   cout<<a;

   cout<<"mang sx tan dan: "<<endl;
   --a;
   cout<<a;
   cout<<"mang sx giam dan:"<<endl;
   ++a;
   cout<<a;



}
