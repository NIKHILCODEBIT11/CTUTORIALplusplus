#include<iostream>
using namespace std;
class number{
    int a=0;
    public:
    number();
    number(int num);
    number(number &object);  // declaration of copy constructor.
    void display();
};
int main(){
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    // Supppose i want to make one constructor z1 which resembles like x or y or z then i have to makee copy constructor like of below :-
    number x1(z);  // calling of copy constructor
    x1.display();
    number z3=z;   // COPY CONSTRUCTOR WILL BE CALLED AS I DECLARED THE OBJECT Z3 HERE ONLY.
    return 0;
}
number::number(){}
number::number(int num){
    a=num;
}
number::number(number &object){   // DEFINITION OF COPY CONSTRUCTOR.
    cout<<"Copy constructor called"<<endl;
    a=object.a;
}
void number::display(){
    cout<<"The value of this object is "<<a<<endl;
}
