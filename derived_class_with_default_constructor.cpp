#include<iostream>
using namespace std;
class base{
    int data;
    public:
    base(int n1);
    base(){
        cout<<"called 1"<<endl;
    };
    void print_data(void);
};
class base_2{
    int data;
    public:
    base_2(int n2);
    base_2(){
        cout<<"called 2"<<endl;
    };
    void print_data();
};
class derived : public base,public virtual base_2{
    int data;
    public:
    derived(int n3);
    void print_data();
};
base::base(int n1){
    data=n1;
    cout<<"non virtual base class constructor called"<<endl;
}
void base :: print_data(){
    cout<<"The value of data is "<<data<<endl;
}
base_2::base_2(int n2){
    data=n2;
    cout<<"virual base_2 class constructor called"<<endl;
}
void base_2::print_data(void){
    cout<<"The value of data is "<<data<<endl;
}
derived :: derived(int n3){
    data=n3;
    cout<<"Derived class constructor is called"<<endl;
}
void derived :: print_data(){
    cout<<"The value of data is "<<data<<endl;
}
int main(){
    derived obj=derived(5);
    obj.print_data();
    return 0;
}
