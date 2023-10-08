#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    //static 
    int count=0;
    public:
    void setdata();
    void getdata();
};
//int employee::count;
int main(){
    employee harish,rajesh,wati;
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