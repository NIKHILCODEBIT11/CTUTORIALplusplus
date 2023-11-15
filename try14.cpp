#include<iostream>
using namespace std;
class employee{
    int id;
    public:
    float salary=78.85;
    employee(int);
};
class programmer:public employee{
      
};
int main(){
    int a,b;
    employee harry(a),rohan(b);
    cout<<a<<"  "<<b<<endl;
    cout<<"Enter a and b :";
    cin>>a>>b;
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    return 0;
    }
employee::employee(int a){
    id=a;
}