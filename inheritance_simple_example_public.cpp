#include<iostream>
using namespace std;
class base{
    int data_1;
    public:
    int data_2;
    void set_data();
    int get_data1();
    int get_data2();
};
void base::set_data(){
    data_1=10;
    data_2=20;
}
int base::get_data1(){
    return data_1;
}
int base::get_data2(){
    return data_2;
}
class derived : public base{
    int data_3;
    public:
    void process();
    void display();
};
void derived::process(){
    data_3=data_2*get_data1();
}
void derived::display(){
    cout<<"The value of data 1 is "<<get_data1()<<endl;
    cout<<"The value of data 2 is "<<data_2<<endl;
    cout<<"The value of data 3 is "<<data_3<<endl;
}
int main(){
    derived der;
    der.set_data();
    der.process();
    der.display();
    return 0;
}