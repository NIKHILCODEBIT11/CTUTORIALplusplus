#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter value of a :"<<endl;
    cin>>a;
    cout<<"Enter value of b :"<<endl;
    cin>>b;
    cout<<"Enter value of c :"<<endl;
    cin>>c;
    cout<<"Enter value of d :"<<endl;
    cin>>d;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<"\n";
    cout<<endl<<endl<<endl;
    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;
    cout<<"The value of d is "<<setw(4)<<d<<"\n";
    return 0;
}