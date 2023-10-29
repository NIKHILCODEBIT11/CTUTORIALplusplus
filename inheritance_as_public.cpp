
#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    float salary=78.85;
    employee(int);
    employee();
};
class programmer:public employee{
    public:
    int languagecode=9;
    programmer(int s){
        id=s;  // showing error as there is no such member variable in basse class or derived class which is accessible as the variable id in base class is private which is not inherited to the derived class.
    }

};
int main(){
    int a,b,c,d;
    employee harry(a),rohan(b);
    cout<<"Enter a and b c and d:";
    cin>>a>>b>>c>>d;
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer de(c);
    programmer e(d);
    cout<<de.id<<endl;
    cout<<e.id<<endl;
    return 0;
    }
employee::employee(int a){
    id=a;
}
employee::employee(){}