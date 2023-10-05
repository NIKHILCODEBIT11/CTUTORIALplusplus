#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    int c=a*5+b-3/b; // firstly multiply and divide then addition from left to right
    cout<<"The value of c is "<<c;
    return 0;
}