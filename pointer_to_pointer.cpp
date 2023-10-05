#include<iostream>
using namespace std;
int main(){
    int a=3;
    int*b=&a;
    int**c=&b;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The value stored at a is "<<a<<endl;
    cout<<"The value stored at a is "<<*b<<endl;
    // pointer to pointer
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value stored at address of b is "<<*c<<endl;
    cout<<"The value stored at address of a is "<<**c<<endl;
    return 0;

}