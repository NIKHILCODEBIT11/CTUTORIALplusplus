#include<iostream>
using namespace std;

template <class t1, class t2> 
class myclass{
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a,t2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<data1<<endl;
        cout<<this->data2<<endl;
    }
};
int main(){
    myclass <char,float> obj('h',3.43);     // 'hi' is not a valid syntax, only 'h' will be considered as "char", and "hi" will be considered as "string" literal.
    myclass <char,string> obj_2('j',"ji");
    obj.display();
    obj_2.display();
    return 0;
}