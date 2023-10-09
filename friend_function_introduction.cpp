#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void set_number(int n1,int n2);
    void print_number();
    // the below running of command is must.
    friend complex sum_complex(complex o1,complex o2);
};
// instead of here i can write below function at end also.
// complex sum_complex(complex o1,complex o2){
//     complex o3;
//     o3.set_number(o1.a+o2.a, o1.b+o2.b);
//     return o3;
// }
int main(){
    int n1,n2,n3,n4;
    cout<<"Enter n1 :";
    cin>>n1;
    cout<<"Enter n2 :";
    cin>>n2;
    cout<<"Enter n3 :";
    cin>>n3;
    cout<<"Enter n4 :";
    cin>>n4;
    complex o1,o2,sum;
    o1.set_number(n1,n2);
    o1.print_number();
    o2.set_number(n3,n4);
    o2.print_number();
    sum=sum_complex(o1,o2);
    sum.print_number();
}
void complex::set_number(int n1,int n2){
    a=n1;
    b=n2;
}
void complex::print_number(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
complex sum_complex(complex o1,complex o2){
    complex o3;
    o3.set_number(o1.a+o2.a, o1.b+o2.b);
    return o3;
}