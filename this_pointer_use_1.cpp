// 1st use of "this" :-

#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void set_data(int a){
        this->a=a;  // ----> Here, "this" is a pointer which points to the object which is trying to the access the member variable 
    }                     // or function even though the member variable or function name remains same.

/*
I could have used a1 at parameter but that doesn't make sense as if i want to set "age" of member variable using set_data then i can't
name the variable of formal parameter as age1 to do my work instead i should even use "age" in that place also. 
*/

    void get_data(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    A a;
    a.set_data(4);
    a.get_data();
    return 0;
}

/*
WHY THIS TIME I AM GETTING THE CORRECT OUTPUT ???????

DEFINITION OF "this" KEYWORD :-

-----> "this" is a keyword *** WHICH IS A POINTER **** which points to the object which invokes the member function.

                                              OR

-----> "this" is a keyword which is a pointer which points to the object whose class's member function or variable is to be used.                                      
*/