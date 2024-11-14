#include<iostream>
using namespace std;

template<class t>
void swapp(t &,t &);
int main(){
    float a=4.5,b=5.6;
    cout<<"Before swapping :-"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"After swapping :-"<<endl;
    swapp(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
template <class t>
void swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;
}

/*
The reason why i didn't used function name as "swap" is :-

C++ has an <algorithm> header file, which provides the built in swap function named "swap", which might cause conflict in cases like 
this particularly with "STANDARD LIBRARY FUNCTION" like "iostream", that's why i renamed my function "swap" to "swapp" to avoid 
confusions.
*/