// 2nd use of "this" :-

#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A& set_data(int a){   // Here, since i want this function to return me the object that's why i did "A&" which is same as inany other 
                          // built in data type like int,float or char etc. so that when it will return me the *this which is same as 
                          // that of "A&".    {int *ptr=&a}  

// Updated information :-  INSTEAD OF "A&" I CAN EVEN SIMPLY USED "A" ALSO AS "*this" IS THE OBJECT OF TYPE "A" WHICH IS BEING RETURNED.
        this->a=a; 
        return *this;   // It will return me the same object for which i set the pvt variable "a" to formal parameter "a".
    }
    void get_data(){
        cout<<"The value of a is "<<a<<endl;  // Here i am running the same command like in prev examples as i am running the get_data()
                                              // for that same object for which i set the pvt variable "a" to formal parametee "a".  
    }
};
int main(){
    A a;
    a.set_data(4).get_data();
    a.get_data();
    return 0;
}

/*
WHAT I DID HERE ??????????

------> Here in the function set_data(), i just made it such a function which on executing will return me the object {not it's pointer}
but the object.

------> In main function i did a.set_data(4).get_data() because as i know that when i executed set_data(4) then it after setting the
value of a (pvt member variable) as 4 or a (formal parameter) for that object for which it runs, then after that it just returns me
back that object (as it is *this) not pointer as it dereferenced it. So, than i did get_data() in the same line as i should always
do {obj.public_member_function} which i even did here as a.set_data(4) returned me the same object. After that i did
a.set_data(4).get_data() which is same as   obj.get_data().
*/