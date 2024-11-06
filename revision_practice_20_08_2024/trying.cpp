#include<iostream>
using namespace std;
class base{
    int a;
    public:
    base(int c){
        cout<<"Default constructor for base class"<<endl;
    }
};
class der : public base{
    int b;
    public:
    int c;
    der(int d) : base(c){
        cout<<"Default constr for der class";
    }
};
int main(){
    der a1(3);
    return 0;
}

/*
1) When both have def const no problem
2)
*/