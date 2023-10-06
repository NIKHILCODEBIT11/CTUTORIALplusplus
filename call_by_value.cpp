#include<iostream>
using namespace std;
void swap(int , int);
int main(){
    int a,b;
    cout<<"enter a: \n";
    cin>>a;
    cout<<"enter b: \n";
    cin>>b;
    cout<<"The value of a before swap is "<<a;
    cout<<endl;
    cout<<"The value of b before swap is "<<b;
    cout<<endl;
    swap(a,b);
    cout<<"The value of a after swap in main function is "<<a<<endl;
    cout<<"The value of b after swap in main function is "<<b<<endl;

}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"The value of a after swap is "<<a<<endl;
    cout<<"The value of b after swap is "<<b<<endl;

}