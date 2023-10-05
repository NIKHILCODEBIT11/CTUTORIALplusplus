#include<iostream>
using namespace std;
int main(){
    int b=3;
    int*a=&b;
    cout<<"the value at address stored in pointer is "<<*a<<endl;
    cout<<"the value at b is "<<b<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address stored in a is "<<a<<endl;
    return 0;
}