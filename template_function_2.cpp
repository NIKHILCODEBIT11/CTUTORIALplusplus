#include<iostream>
using namespace std;

template<class t1,class t2>   // Declaration of template
t2 sum(t1 a1,t2 a2);     // Declaration of function "sum" using template
int main(){
    cout<<sum(3,4.434);
    return 0;
}
template <class t1,class t2>    // For using such method of defining function, i will again have to specify the template declaration,before writing definition of the function.
t2 sum(t1 a1,t2 a2){
    return a1+a2;
}