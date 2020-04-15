#include <bits/stdc++.h>

using namespace std;
class STUDENT;
class SCHOOL{
    char names[50],dates[50];
    friend class FACULTY;
    friend void IN_SCHOOL(STUDENT a[],int n);

};

class FACULTY{
    friend void IN_SCHOOL(STUDENT a[],int n);
    friend class STUDENT;
    char namef[50],datef[50];
    SCHOOL x;
public:
    void input(){
        cout<<"nhap ten khoa";
        fflush(stdin);
        gets(namef);
        cout<<"nhap ngay thanh lap khoa:";
        fflush(stdin);
        gets(datef);
        cout<<"nhap ten truong";
        fflush(stdin);
        gets(x.names);
        cout<<"nhap ngay tl truong";
        fflush(stdin);
        gets(x.dates);
    }
    void output(){
        cout<<setw(15)<<namef<<setw(15)<<datef<<setw(15)<<x.names<<setw(15)<<x.dates<<endl;

    }
};

class STUDENT{
    friend void IN_SCHOOL(STUDENT a[],int n);
    char maSV[50],tenSV[50],classs[50];
    int score;
    FACULTY y;
public:
    void input(){
        cout<<"nhap masv:";
        fflush(stdin);
        gets(maSV);
        cout<<"nhap ten sv:";
        fflush(stdin);
        gets(tenSV);
        cout<<"nhap lop:";
        fflush(stdin);
        gets(classs);
        cout<<"nhap score:";
        cin>>score;
        y.input();
    }
    void output(){
        cout<<setw(15)<<maSV<<setw(15)<<tenSV<<setw(15)<<classs<<setw(15)<<score<<setw(15);
        y.output();
    }




};

void IN_SCHOOL(STUDENT a[],int n){
    for(int i=0;i<n;i++){
        if(strcmp(a[i].y.x.names,"HAUI")==0){
            a[i].output();
        }
    }
}
int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    STUDENT a[n];
    for(int i=0;i<n;i++){
        a[i].input();
    }

    for(int i=0;i<n;i++){
        a[i].output();
    }

    IN_SCHOOL(a,n);
}
