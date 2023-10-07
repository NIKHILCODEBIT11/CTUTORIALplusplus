#include<iostream>
using namespace std;
class employee{
    private:int a,b,c;
    public:int d,e;
    void getdata();
    void setdata(int a1,int b1,int c1);
};
int main(){
    employee harry;   // harry is object
    harry.d=34;
    harry.e=44;
    //harry.a=12;  // it will show error because 'a' is a private variable which can't be accessed normally.
    harry.setdata(1,2,3);
    harry.getdata();
    return 0;
}
void employee::getdata(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
}
void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}