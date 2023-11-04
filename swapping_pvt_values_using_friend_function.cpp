#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    friend void swap(c1 &x,c2 &y);
    public:
    void set_data(int);
    void print_data();
};
class c2{
    int a;
    public:
    void set_data(int);
    friend void swap(c1 &x,c2 &y);
    void print_data();
};
void swap(c1 &x,c2 &y);
int main(){
    c1 o1;
    o1.set_data(3);
    o1.print_data();
    c2 o2;
    o2.set_data(7);
    o2.print_data();
    swap(o1,o2);
    o1.print_data();
    o2.print_data();
    return 0; 
}
void c1 :: set_data(int v1){
    a=v1;
}
void c2::set_data(int v2){
    a=v2;
}
void c1::print_data(){
    cout<<"private value of c1 is "<<a<<endl;
}
void c2 :: print_data(){
    cout<<"Private value of c2 is "<<a<<endl;
}
void swap(c1 &x,c2 &y){
    cout<<"The value of pvt value of c1 before swap is "<<x.a<<endl;
    cout<<"The value of pvt value of c2 after swap is "<<y.a<<endl;
    int t;
    t=x.a;
    x.a=y.a;
    y.a=t;
    cout<<"The value of pvt value of c1 after swap is "<<x.a<<endl;
    cout<<"The value of pvt value of c2 after swap is "<<y.a<<endl;
}

