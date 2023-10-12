#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    //static
    //static int count;
    int count;
    public:
    void setdata();
    void getdata();
    void initcount(){count=0;}
};
// count is the static data member of class employee.
//int employee::count=1;  // if i want count to run from a certain value then i will initialize count to that value from here.
//void employee::initcount();
int main(){
    employee harish,rajesh,wati;
    harish.initcount();
    harish.setdata();
    harish.getdata();
    rajesh.setdata();
    rajesh.getdata();
    wati.setdata();
    wati.getdata();
    return 0;
}
void employee::setdata(){
    cout<<"Enter id: ";
    cin>>id;
    count++;
}
void employee::getdata(){
    cout<<endl;
    cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
}