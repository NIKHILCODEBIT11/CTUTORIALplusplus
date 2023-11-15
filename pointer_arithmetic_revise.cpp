#include<iostream>
using namespace std;
int main(){
    int arr[3];
    cout<<"enter 3 :";
    cin>>arr[0]>>arr[1]>>arr[2];
    int*ptr=arr;
    cout<<*ptr<<endl;
    *ptr=*(ptr+1);
    cout<<*(ptr)<<endl;
    cout<<*ptr<<endl;
    return 0;
}