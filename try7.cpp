#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void set_data(int n,int m);
    void get_data();
    void sum_real_complex(complex o1,complex o2);
    void sum_complex_complex(complex o1,complex o2);
};
int main(){
    int n,m,v,b;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter v: ";
    cin>>v;
    cout<<"Enter b: ";
    cin>>b;
    complex o1,o2,o3;
    o1.set_data(n,m);
    o1.get_data();
    o2.set_data(v,b);
    o2.get_data();
    o3.sum_real_complex(o1,o2);
    o3.sum_complex_complex(o1,o2);
    return 0;
}
void complex::set_data(int n,int m){
    // cout<<"Enter real part :";
    // cin>>n;
    // cout<<"Enter imaginary part :";
    // cin>>m;
    a=n;
    b=m;
}
void complex::get_data(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
void complex::sum_real_complex(complex o1,complex o2){
    int r=o1.a+o2.a;
    cout<<"The sum of real part of complex number is "<<r<<endl;
}
void complex::sum_complex_complex(complex o1,complex o2){
    int k=o1.b+o2.b;
    cout<<"The sum of imagainary part of complex number is "<<k<<endl;
}