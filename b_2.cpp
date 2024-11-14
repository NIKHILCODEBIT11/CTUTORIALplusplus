// Baseclass pointer pointing to derivedclass object.

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
    void get_data(){
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
    baseclass base_obj_2;
    derivedclass der_obj;
    baseclass *base_obj_1=&der_obj;
    (*base_obj_1).set_data(3,4);
    (*base_obj_1).get_data();
    return 0;
}