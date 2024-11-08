#include<iostream>
using namespace std;

template<class t1, class t2>
class calculator{
    public:
    t1 num1;
    t2 num2;
    calculator(t1 a,t2 b){
        num1=a;
        num2=b;
    }
    t2 addition(){
        return num1+num2;
    }
    t2 subtraction(){
        return num1-num2;
    }
    t2 multiplication(){
        return num1*num2;
    }
    t2 division(){
        return num1/num2;
    }
};
int main(){
    calculator <int,float> c1(32,34.3443);
    cout<<c1.addition()<<endl;
    cout<<c1.subtraction()<<endl;;
    cout<<c1.multiplication()<<endl;
    cout<<c1.division()<<endl;
    return 0;
}

/*
Suppose if in differnt calculation functions, instead of return type "float" i gave "int", then instead of getting "float" value as 
output, i will be getting "int" values.
*/