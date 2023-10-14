#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    public:
    void set_data_c1(int);
    friend void get_data(c1,c2);
    friend void get_data_2(c1,c2);
    friend void swap(c1 &,c2 &);
};
class c2{
    int b;
    public:
    void set_data_c2(int);
    friend void get_data(c1,c2);
    friend void get_data_2(c1,c2);
    friend void swap(c1 &,c2&);
};
void get_data(c1,c2);
void get_data_2(c1,c2);
void swap(c1 &x,c2&y);
int main(){
    int n1,n2;
    cout<<"Enter n1 and n2 :";
    cin>>n1>>n2;
    c1 o1;
    c2 o2;
    o1.set_data_c1(n1);
    o2.set_data_c2(n2);
    get_data(o1,o2);
    swap(o1,o2);
    get_data_2(o1,o2);
    return 0;
}
void c1::set_data_c1(int n){
    a=n;
}
void c2::set_data_c2(int m){
    b=m;
}
void get_data(c1 o1,c2 o2){
    cout<<"The numbers before swapping are n="<<o1.a<<" and m="<<o2.b<<endl;
}
void swap(c1 &x,c2 &y){
    int t=x.a;
    x.a=y.b;
    y.b=t;
    
}
void get_data_2(c1 o1,c2 o2){
    cout<<"The numbers after swapping are n="<<o1.a<<" and m="<<o2.b<<endl;
}