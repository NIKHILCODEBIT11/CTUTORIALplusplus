#include<iostream>
using namespace std;
class complex_numbers{
    int a;
    int b;
    public:
    void setdata(int v1, int v2);
    void set_data_by_sum(complex_numbers o1,complex_numbers o2);
    void print();
};
int main(){
    complex_numbers c1,c2,c3;
    int v1,v2,v3,v4;
    cout<<"Enter v1: ";
    cin>>v1;
    cout<<"Enter v2: ";
    cin>>v2;
    cout<<"Enter v3: ";
    cin>>v3;
    cout<<"Enter v4: ";
    cin>>v4;
    c1.setdata(v1,v2);
    c1.print();
    c2.setdata(v3,v4);
    c2.print();
    c3.set_data_by_sum(c1,c2);
    c3.print();
    return 0;
}
void complex_numbers::setdata(int v1, int v2){
    a=v1;
    b=v2;
}
void complex_numbers::set_data_by_sum(complex_numbers o1,complex_numbers o2){
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}
void complex_numbers::print(){
    cout<<"The complex number is "<<a<<"+ "<<b<<"i"<<endl;
}