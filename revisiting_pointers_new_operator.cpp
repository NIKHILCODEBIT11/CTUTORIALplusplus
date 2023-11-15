#include<iostream>
using namespace std;
int main(){
    // BASIC EXAMPLE :-
    int a=4;
    int *ptr=&a;
    cout<<"The value at a is "<<*ptr<<endl;

    // new KEYWORD :-
    int *q=new int(40);
    cout<<"The value stored at pointer q is "<<q<<endl;
    cout<<"The value at address of q is "<<*q<<endl;
    delete q;
    cout<<"The value stored at pointer q is "<<q<<endl;
    cout<<"The value at address of q is "<<*q<<endl;

    // USING new KEYWORD TO STORE BLOCK OF DATA AS ARRAY :-
    int *arr=new int[3];
    arr[0]=100;
    arr[1]=200;
    arr[2]=300;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The address stored in arr[0] is "<<&arr[0]<<endl;
    arr++;
    cout<<"The value of arr[1] is "<<arr[0]<<endl;
    cout<<"The address stored in arr[1] is "<<&arr[0]<<endl;
    arr++;
    cout<<"The value of arr[2] is "<<arr[0]<<endl;
    cout<<"The address stored in arr[2] is "<<&arr[0]<<endl;
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The address stored in arr[0] is "<<&arr[0]<<endl;
    arr++;
    cout<<"The value of arr[1] is "<<arr[0]<<endl;
    cout<<"The address stored in arr[1] is "<<&arr[0]<<endl;
    arr++;
    cout<<"The value of arr[2] is "<<arr[0]<<endl;
    cout<<"The address stored in arr[2] is "<<&arr[0]<<endl;
    return 0;
}