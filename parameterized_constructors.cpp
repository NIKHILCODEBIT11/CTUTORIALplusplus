#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int,int);
    void print_number();
};
int main(){
    int n1,n2;
    
    // IMPLICIT CALL
    complex a(4,6);
    a.print_number();

    // EXPLICIT CALL
    complex b=complex(5,7);
    b.print_number();
    return 0;
}
void complex::print_number(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
complex::complex(int x,int y){  //---> THIS IS A PARAMETERIZES CONSTRUCTOR AS IT TAKES 2 PARAMETERS.
    a=x;
    b=y;
}