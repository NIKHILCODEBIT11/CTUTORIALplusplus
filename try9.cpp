#include<iostream>
using namespace std;
class y; // just to assure compiler that there is a class y
        // so it can allow it.
class x{
    int a;
    public:
    void setdata(int n1);
    friend void add(x o1, y o2);  // if i didn't did forward declaration
    // of class y then i couldn't have used y o2 in above formal parameter.
};
class y{
    int a;
    public:
    void setdata(int n1);
    friend void add(x o1,y o2);
};
void add(x o1,y o2);
int main(){
    int n1,n2;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;
    x o1;
    o1.setdata(n1);
    y o2;
    o2.setdata(n2);
    add(o1,o2);
}
void x::setdata(int n1){
    a=n1;
}
void y::setdata(int n1){
    a=n1;
}
void add(x o1,y o2){
    cout<<"Summing data of of x and y objects gives me "<<o1.a+o2.a;
}
