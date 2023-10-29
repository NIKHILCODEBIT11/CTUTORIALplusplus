#include<iostream>
using namespace std;
class employee{
    int k;
    public:
    int id;
    float salary;
    employee();
    employee(int);
};
class programmer : private employee{
    public:
    programmer();
    programmer(int);
    int languagecode=77;
    void get_data();
};
int main(){
    int a,b;
    cout<<"Enter argument for parameterized const of base class :";
    cin>>a;
    cout<<"Enter argument for parameterized const of derived class :";
    cin>>b;
    employee harry,rohan(a);
    cout<<rohan.id<<endl;
    harry=employee(a);
    cout<<harry.id<<endl;
    programmer harish,hisrish(b);
    //  cout<<hisrish.id;  AS the members are inherited as private so can't access the member variable id.
    hisrish.get_data();
    harish=programmer(b);
    harish.get_data(); 
    return 0;
    //  cout<<harry.k;  it will show error as i am trying to access the private variable.
}
employee::employee(){
    cout<<"BLANK CONSTRUCTOR OF CLASS EMPLOYEE CALLED"<<endl;
}
employee::employee(int a){
    cout<<"PARAMETERIZED CONSTRUCTOR OF CLASS EMPLOYEE CALLED"<<endl;
    k=a;
    id=a;
}
programmer::programmer(){
    cout<<"BLANK CONSTRUCTOR OF CLASS PROGRAMMER CALLED"<<endl;
}
programmer::programmer(int b){
    cout<<"PARAMETERIZED CONSTRUCTOR OF CLASS PROGRAMMER CALLED"<<endl;
    // k=b;  it is inaccessible as being private member of the base class it is not inherited to the derived class.
    id=b;
}
void programmer::get_data(){
    cout<<id<<endl;
}