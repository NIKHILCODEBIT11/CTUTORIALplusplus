#include<iostream>
using namespace std;

template <class t1=int, class t2=float, class t3=const char *>
class name{
    // private:
    public:
    t1 a;
    t2 b;
    t3 c;
    // public:
    name(t1 a1,t2 b1,t3 c1){
        a=a1;
        b=b1;
        c=c1;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    name <int,float,float> obj (2,4.56,4.5);
    obj.display();

    /*
    if i do like :-

    name<> obj_2(1,4.3,"c");
    obj_2.display();

    while keeping default parameter "t3" as char*, then i am getting error as :-

    warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
     name<> obj_2(1,4.3,"c");
                           ^

    To avoid this error, i will define "t3" parameter as const char*, because the str "c" is a constant length string
    */
    name<> obj_2(1,4.3,"c");
    obj_2.display();
    name <char,char,string>obj_3('c','d',"c");
    obj_3.display();
    name <char,char> obj_4('g','h',"gi");
    obj_4.display();
    return 0;
}