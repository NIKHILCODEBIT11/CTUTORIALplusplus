#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void getdata();
    int setdata(int a1,int b1,int c1);
};
int main(){
    int x,y,z,i;
    employee harry;
    // harry.a=76;  it will show error as a is a pvt variable.
    harry.d=23;
    harry.e=65;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<"Enter z :";
    cin>>z;
    harry.setdata(x,y,z);
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
int employee::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=a1+b1+c1;
    return c;
}