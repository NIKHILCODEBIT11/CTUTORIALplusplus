#include<iostream>
using namespace std;
class base_1{
    int data_1;
    public:
    base_1(int i){
        data_1=i;
        cout<<"non virtual base_1 constructor called"<<endl;
    }
    void print_data(void){
        cout<<"The value of data_1 is"<<data_1<<endl;
    }
};
class base_2{
    int data_2;
    public:
    base_2(int i){
        data_2=i;
        cout<<"Virtual base_2 class constructor called"<<endl;
    }
    void print_data(){
        cout<<"The value of data_2 is "<<data_2<<endl;
    }
};
class derived : public base_1,virtual public base_2{
    int derived_1,derived_2;
    public:
    derived(int i1,int i2,int i3,int i4):base_1(i1),base_2(i2){
        derived_1=i3;
        derived_2=i4;
        cout<<"Derived class constructor called"<<endl;
    }
    void print_data(){
        base_2::print_data();
    }
    // void print_data(){
    //     cout<<"The value of derived_1 is "<<derived_1<<endl;
    //     cout<<"The value of derived_2 is "<<derived_2<<endl;
    // }
};
int main(){
    derived obj(3,4,5,6);
    obj.print_data();   
    return 0;
}