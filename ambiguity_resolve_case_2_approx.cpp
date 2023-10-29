#include<iostream>
using namespace std;
class B{
    public:
    void say(void){
        cout<<"Hello world"<<endl;
    }
};
class D:public B{
    public :
    void say();   // SINCE THIS TIME HERE I DEFINED 
};   // say() FUNCTION THEN IT WILL OVERWRITE THE say() FUNCTION
void D::say(){           // FROM BASE CLASS.   
    cout<<"Hello people"<<endl;
}
int main(){
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}