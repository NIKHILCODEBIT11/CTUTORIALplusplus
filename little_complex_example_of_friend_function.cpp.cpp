// DOING BY CALL BY REFRENCE AS VALUES TO BE CHANGED USING REFREENCE VARIABLE.
#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    public:
    friend void swap(c1 &,c2 &);
    void set_data(int n1);
    void print_data();
};
class c2{
    int b;
    public:
    friend void swap(c1 &,c2 &);
    void set_data(int n2);
    void print_data();
};
void swap(c1 &,c2 &);
int main(){
    int n1,n2;
    c1 o1;
    c2 o2;
    cout<<"Enter n1 stored in c1 :";
    cin>>n1;
    cout<<"Enter n2 stored in c2 :";
    cin>>n2;
    o1.set_data(n1);
    o1.print_data();
    o2.set_data(n2);
    o2.print_data();
    swap(o1,o2);
    cout<<"The value of c1 after swap becomes ";
    o1.print_data();
    cout<<"The value of c2 after swap becomes ";
    o2.print_data();
}
void c1::set_data(int n1){
    a=n1;
}
void c2::set_data(int n2){
    b=n2;
}
void swap(c1 &x,c2 &y){
    int t;
    t=x.a;
    x.a=y.b;
    y.b=t;
}
void c1::print_data(){
    cout<<a<<endl;
}
void c2::print_data(){
    cout<<b<<endl;
}
