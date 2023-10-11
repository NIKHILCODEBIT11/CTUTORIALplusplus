#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int,int);
    complex(int);
    complex();
    void print(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    int q,z,r;
    cout<<"Enter q:";
    cin>>q;
    cout<<"Enter z:";
    cin>>z;
    cout<<"Enter r:";
    cin>>r;
    complex l;
    l.print();
    complex u(q,z);
    u.print();
    complex d(r);
    d.print();
}
complex::complex(){
    a=0;
    b=2;
}
complex::complex(int q,int z){
    a=q;
    b=z;
}
complex::complex(int r){
    a=r;
    b=8;
}