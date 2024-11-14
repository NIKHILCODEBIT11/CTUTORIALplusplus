// Baseclass pointer pointing to baseclass object.

#include<iostream>
using namespace std;
class baseclass{
    int a;
    public:
    int b;
    void set_data(int a,int b){
        this->b=b;
        this->a=a;
    }
    virtual void get_data(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
class derivedclass : public baseclass{
    int z;
    public:
    int c;
    void set_data(int a,int b){
        z=a;
        c=b;
    }
    void get_data(){
        cout<<"The value of z is "<<z<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    derivedclass der_obj_1;
    derivedclass *der_obj=& der_obj_1;
    (*der_obj).set_data(3,4);
    (*der_obj).get_data();
    return 0;
}