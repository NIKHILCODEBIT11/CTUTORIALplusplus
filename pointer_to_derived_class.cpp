#include<iostream>
using namespace std;
class baseclass{
    int baseclass_pvt;
    public:
    int baseclass_pub;
    void display(){
       // cout<<"Displaying base class pvt variable "<<baseclass_pvt<<endl;
        cout<<"Displaying base class public variable "<<baseclass_pub<<endl<<endl;
    }
};
class derivedclass : public baseclass{
    int derivedclass_pvt;
    public:
    int derivedclass_pub;
    void display();
};
int main(){

    // CASE - 1 { Baseclass pointer points to derived class object }
    cout<<"Baseclass pointer points to derived class object"<<endl;
    baseclass *baseclass_ptr;
    baseclass baseclass_obj;
    derivedclass derivedclass_obj;
    baseclass_ptr=&derivedclass_obj;
    baseclass_ptr->baseclass_pub=44;
   // baseclass_ptr->baseclass_pvt=33;
    (*baseclass_ptr).display();

    // CASE - 2 { Baseclass pointer points to base class object }
    cout<<"Baseclass pointer points to base class object"<<endl;
    baseclass_ptr=&baseclass_obj;
    baseclass_ptr->baseclass_pub=55;
    baseclass_ptr->display();

    // CASE 3 { Derived class pointer points to derived class object }
    cout<<"Derived class pointer points to derived class object"<<endl;
    derivedclass *derivedclass_ptr;
    derivedclass_ptr=&derivedclass_obj;
    derivedclass_ptr->baseclass_pub=66;  // From a derived class pointer i can only and only access the derived class members not even
                                           // the base class members that are inherited to the derived class members.   
    derivedclass_ptr->derivedclass_pub=77;
    derivedclass_ptr->display();

    // CASE 4 { Derived class pointer points to base class object }
    /*
    cout<<"Derived class pointer points to base class object"<<endl<<endl;
    derivedclass *derivedclass_ptr_1;     This is showing error as "a value of type baseclass* cannot be assigned to an entity of type
    baseclass baseclass_obj_1;             derivedclass*"  
    derivedclass_ptr_1=&baseclass_obj_1;
    */

    return 0;
}
void derivedclass :: display(){
    // cout<<"Displaying derived class pvt cariable "<<derivedclass_pvt<<endl;
    cout<<"Displaying derived class public variable "<<derivedclass_pub<<endl;
    cout<<"Displaying base class public variable "<<baseclass_pub<<endl;
}