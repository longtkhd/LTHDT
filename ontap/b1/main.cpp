#include <bits/stdc++.h>
class PERSON;
using namespace std;
class SCHOOL {
    friend void IN(PERSON a[],int n);
    friend class FACULTY;
    char names[50],dates[50];
};
class FACULTY{
    friend void IN(PERSON a[],int n);
    friend class STUDENT;
    char namef[50],datef[50];
    SCHOOL x;
public:
    void input(){
        cout<<"nhap ten khoa::";
        fflush(stdin);
        gets(namef);
        cout<<"nhap ngay tl khoa:";
        fflush(stdin);
        gets(datef);
        cout<<"nhap ten truong:";
        fflush(stdin);
        gets(x.names);
        cout<<"nhap ngay tl truong:";
        fflush(stdin);
        gets(x.dates);
    }
    void output(){
        cout<<setw(15)<<namef<<setw(15)<<datef<<setw(15)<<x.names<<setw(15)<<x.dates<<setw(15);
    }
};

class STUDENT{
protected:

    FACULTY y;
    char Class[50];
    float score;
public:
    void input(){
        cout<<"nhap lop:";
        fflush(stdin);
        gets(Class);
        cout<<"nhap diem:";
        cin>>score;
        y.input();
    }
    void output(){
        cout<<setw(15)<<Class<<setw(15)<<score;
        y.output();


    }
};

class PERSON : public STUDENT{
    friend void SORT(PERSON a[],int n);
    friend void IN(PERSON a[],int n);
    char name[50],birth[50],address[50];
public:
    void input(){
        cout<<"nhap ten:";
        fflush(stdin);
        gets(name);
        cout<<"nhap birth:";
        fflush(stdin);
        gets(birth);
        cout<<"nhap dia chi:";
        fflush(stdin);
        gets(address);
        STUDENT::input();

    }
    void output(){
        cout<<setw(15)<<name<<setw(15)<<birth<<setw(15)<<address;
        STUDENT::output();
        cout<<endl;
    }

};

void SORT(PERSON a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].score > a[j].score)
                swap(a[i],a[j]);
        }
    }
}

void IN(PERSON a[],int n){
    for(int i=0;i<n;i++){
        if(strcmp(a[i].y.x.names,"HAUI")==0){
            a[i].output();
        }
    }
}




int main()
{
    int n;
    do{
        cout<<"nhap n:";
        cin>>n;
    }while(n>100);

    PERSON a[n];
    for(int i=0;i<n;i++){

        cout<<"nhap sinh vien thu :"<<i +1<<endl;
        a[i].input();
    }
    for(int i=0;i<n;i++){

        a[i].output();
    }

    SORT(a,n);
    cout<<"sau sort: ===================="<<endl;
     for(int i=0;i<n;i++){

        a[i].output();
    }
    cout<<"nhung sv HAUI:";
    IN(a,n);
}
