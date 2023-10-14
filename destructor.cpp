#include<iostream>
using namespace std;
int count=0;
class num{
    private:
    int count;
    public:
    num();
    ~num();
};
int main(){
    cout<<"I am inside main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
num::num(){
    ::count++;
    cout<<"This is the time when constructor is called for object number "<<::count<<endl;
}
num::~num(){
    cout<<"This is the time when destructor is called for object number "<<::count--<<endl;
}