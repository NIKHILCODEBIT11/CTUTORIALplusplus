#include<iostream>
using namespace std;
class B{
    public:
    void say(void){
        cout<<"Hello world"<<endl;
    }
};
class D:public B{
};
int main(){
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}