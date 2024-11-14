#include<iostream>
using namespace std;
class baseclass{
    int baseclass_pvt;
    public:
    int baseclass_pub;
    virtual void display(){
    // cout<<"Displaying base class pvt variable "<<baseclass_pvt<<endl;
    //     cout<<"Displaying base class public variable "<<baseclass_pub<<endl<<endl;
    cout<<"Hi"<<endl;
    }
};
class derivedclass : public baseclass{
    int derivedclass_pvt;
    public:
    int derivedclass_pub;
    //void display();   // I should even comment this as i am checking whether by removing "display" from "derived class" i will
    // get the display() of base class or not.
};
int main(){

    // CASE - 1 { Baseclass pointer points to derived class object }
    cout<<"Baseclass pointer points to derived class object"<<endl;
    baseclass *baseclass_ptr;
    baseclass baseclass_obj;
    derivedclass derivedclass_obj;
    baseclass_ptr=&derivedclass_obj;
    baseclass_ptr->baseclass_pub=44;
   // baseclass_ptr->baseclass_pvt=33;  // it will be compiled, but will show error when executed.
    (*baseclass_ptr).display();      // will run display() of "Base class" accessing all "Base class" members.

    // CASE - 2 { Baseclass pointer points to base class object }
    cout<<"Baseclass pointer points to base class object"<<endl;
    baseclass_ptr=&baseclass_obj;
    baseclass_ptr->baseclass_pub=55;
    baseclass_ptr->display();   // Will run display() of "Base class" accessing all "Base class" members.

    // CASE 3 { Derived class pointer points to derived class object }
    cout<<"Derived class pointer points to derived class object"<<endl;
    derivedclass *derivedclass_ptr;
    derivedclass_ptr=&derivedclass_obj;
    derivedclass_ptr->baseclass_pub=66;  // I can do it, as after inheriting to derived class, baseclass_pub is also a data member of
                                        // the derived class, and even the display() from base class is inherited, but still, as i have 
                                        // redefined it in the derived class, so the display() of derived class will run.

    derivedclass_ptr->derivedclass_pub=77;
    derivedclass_ptr->display();    // Will run display() of "derived class" accessing all "Derived class" members.

    // CASE 4 { Derived class pointer points to base class object }
    /*
    cout<<"Derived class pointer points to base class object"<<endl<<endl;
    derivedclass *derivedclass_ptr_1;     This is showing error as "a value of type baseclass* cannot be assigned to an entity of type
    baseclass baseclass_obj_1;             derivedclass*"  
    derivedclass_ptr_1=&baseclass_obj_1;
    */

    return 0;
}
// void derivedclass :: display(){
//     // cout<<"Displaying derived class pvt cariable "<<derivedclass_pvt<<endl;
//     cout<<"Displaying derived class public variable "<<derivedclass_pub<<endl;
//     cout<<"Displaying base class public variable "<<baseclass_pub<<endl;
// }