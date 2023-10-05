#include<iostream>
using namespace std;
int c=874; // global variable
int main(){
    // ************* BUILD IN DATA TYPES ************
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<("enter b:");
    cin>>b;
    c=a+b;
    cout<<"the sum is "<<c<<"."<<endl<<endl;
    cout<<"the local c is "<<c<<"."<<endl<<endl;  // accessing lcal variiable
    cout<<"The global c is "<<::c<<"."<<endl<<endl; // accessing global variable
    return 0;
}