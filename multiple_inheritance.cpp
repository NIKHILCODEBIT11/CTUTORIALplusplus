#include<iostream>
using namespace std;
class base_1{
    protected:
    int base_1;
    public:
    void set_base_1(int a){
        base_1=a;
    }
    void show_base_1(void){
        cout<<"The value of base 1 from class base_1 is "<<base_1<<endl;
    }
};
class base_2{
    protected:
    int base_2;
    public:
    void set_base_2(int b){
        base_2=b;
    }
};
class base_3{
    protected:
    int base_3;
    public:
    void set_base_3(int c);
};
class base_4{
    protected:
    int base_4;
    public:
    void set_base_4(int d){
        base_4=d;
    }
};
void base_3::set_base_3(int c){
    base_3=c;
}
// DERIVING A CLASS FROM 4 BASE CLASSES :-
class derived:public base_1,public base_2,public base_3,public base_4{
    public:
    void show(void);
};
void derived::show(){
    cout<<"The value of base_1 is "<<base_1<<endl;
    cout<<"The value of base_2 is "<<base_2<<endl;
    cout<<"The value of base_3 is "<<base_3<<endl;
    cout<<"The value of base_4 is "<<base_4<<endl;
    void show_base_1();
}
int main(){
    derived harry;
    harry.set_base_1(22);
    harry.show_base_1();
    harry.set_base_2(23);    // SUPPOSE IF I DID NOT SET VALUE OF base_2 THEN WHAT WOULD I GET IN OUTPUT ?????
    harry.set_base_3(25);
    harry.set_base_4(28);    //  ANS :- I WILL GET GARBAGE VALUE LIKE 4201248 BECAUSE I NEVER SET OR GAVE ANY VALUE TO base_2
    harry.show();
    return 0;
}