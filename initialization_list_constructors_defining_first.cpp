#include<iostream>
using namespace std;
class test{
    private:
    int b;
    int a;
    public:
    test(int a1,int a2) : b(a1+a2),a(a1*a2*b){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    int a1,a2;
    cout<<"Enter a1 and a2 :";
    cin>>a1>>a2;
    test t=test(a1,a2);
    return 0;
}