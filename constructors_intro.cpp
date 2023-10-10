#include<iostream>
using namespace std;
class complex{
    int a,b;
    /*
    CREATING A CONSTRUCTOR :-
    Constructor is a special member function with same name 
    as of the class.
    it automatically runs or invokes when the object is made.
    It is used to initialize the objects of it's class.*/
    public:
    complex(); // constructor declaration 
    void print_data();
};
int main(){
    complex o1,o2,o3;
    o1.print_data();
    o2.print_data();
    o3.print_data();
    return 0;
    // WITHOUT EVEN RUNNING THE complex() I I GOT VALUES
    // BECAUSE THE NAME OF THIS FUNCTION IS SAME TO THAT OF 
    // CLASS AND SO IS A CONSTRUCTOR WHICH INVOKES WHENEVER
    // OBJECT IS CREATED.
}
void complex::print_data(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
// LIKE THAT OF ANY NORMAL FUNCTION AFTER WRITING DECLARATION
// ABOVE I AM GIVING DEFINITION TO THE FUNCTION USING SCOPE
// RESOLUTION OPERATOR AS CONSTRUCTOR IS A MEMBER FUNCTION.

complex::complex(){ // ----> This is a DEFAULT CONSTRUCTOR AS IT TAKES NO PARAMETERS. 
    a=2;
    b=0;
    cout<<"Hello world"<<endl;
}