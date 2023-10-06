#include<iostream>
using namespace std;
void swap(int &a, int &b);
int main(){
    int x,y;
    cout<<"enter x: \n";
    cin>>x;
    cout<<"enter y: \n";
    cin>>y;
    cout<<"The value of x before swap is "<<x;
    cout<<endl;
    cout<<"The value of y before swap is "<<y;
    cout<<endl;
    swap(x,y);
    cout<<"The value of x after swap in main function is "<<x<<endl;
    cout<<"The value of y after swap in main function is "<<y<<endl;

}
void swap(int &a,int &b){  // REFERENCE VARIABLES
    int temp=a;
     a=b;
     b=temp;
    cout<<"The value of a after swap is "<<a<<endl;
    cout<<"The value of b after swap is "<<b<<endl;

}