#include<iostream>
using namespace std;
int main(){
    // ************ TYPECASTING *************
    int a;
    float b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    int c=int(b);  // can be typecasted even like this
    /*
    int c=int(b)
    must be assigned 
    only after taking
    input c
    otherwise c
    will not be given value
    of b
    */
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<(float)a<<endl;  // another way of typecasting
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of c is "<<(float)c<<endl;
    cout<<"The value of c is "<<float(c)<<endl;
    cout<<"The value of c is "<<(int)c<<endl;
    cout<<"The value of c is "<<int(c)<<endl;
    cout<<"The expressionn is "<<a+b+c<<endl;
    cout<<"The expression 1 is "<<a+int(b+c)<<endl;
    return 0;
}