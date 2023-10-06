#include<iostream>
using namespace std;
// function prototype :-
int sum(int a,int b);
//int sum(int a,b); -----> not acceptable
// int sum(int,int); ----> acceptable
void g(void); // acceptable
// void g();  // acceptable
int main(){
    int num1,num2;
    cout<<"enter num1:";
    cin>>num1;
    cout<<"enter num2:";
    cin>>num2;
    cout<<"the sum is "<<sum(num1 , num2);
    g();
    // num1 and num2 are actual parameters.
    return 0;
}
int sum(int a,int b){
    // Formal parameters a and b will tbe taking values from 
    //actual parameters num1 and num2.
    int c=a+b;
    return c;
}
void g(void){
    cout<<"\n Hello good morning";
}