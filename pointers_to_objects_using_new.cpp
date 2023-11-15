#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imag;
    public:
    void set_data(int a1,int a2){
        real=a1;
        imag=a2;
    }
    void get_data(){
        cout<<"The real part is "<<real<<" and imaginary part is "<<imag<<endl;
    }
};
int main(){
    complex *c=new complex;
    cout<<"The address stored in c is "<<c<<endl;   
    (*c).set_data(10,20);    // WHY LIKE IN PREVIOUS EXAMPLE I DIDN'T USED 
    (*c).get_data();   // c.set_data(10,20) or c.get_data() LIKE I DID WITH OTHER DATA TYPES       
    return 0;  // LIKE INT ?? 
}

// ANS---> WHILE USING DATA TYPE INT THAT TIME ALSO I WAS USING " * " OPERATOR TO 
// ACCESS VALUE AND WAS JUST WRITING THE NAME OF POINTER WHERE ADDRESS WAS REQUIRED.
// BUT HERE SINCE  ONLY NEED THE VALUE THAT'S WHY USING 
// (*c),.set_data(10,20) or (*c).get_data().