#include<iostream>
using namespace std;
class base_1{
    public:
    void greet(void){
        cout<<"How are you ?"<<endl;
    }
};
class base_2{
    public:
    void greet(){
        cout<<" Kaise ho ?"<<endl;
    }
};
class derived:public base_1,public base_2{
   
};
int main(){
    base_1 base_1_obj;
    base_2 base_2_obj;
    base_1_obj.greet();
    base_2_obj.greet();
    derived d;
    // d.greet();   // showing that  "derived::greet" is ambiguous.
   // because i am trying to access such a function from derived class
   // which has same name in both classes as inherited from the base class.   
   return 0;
}       