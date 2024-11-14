#include<iostream>
using namespace std;

void func(int){
    cout<<"I am first non templatised func()"<<endl;
}

template <class t>
void func(t a){
    cout<<"I am templatised func()"<<endl;
}

template <class t>
void func1(t a){
    cout<<"I am a templatised func1()"<<endl;
}

int main(){
    func(3);    // Exact match takes the highest priority
    func1(3);   
    func("ch");
    return 0;
}