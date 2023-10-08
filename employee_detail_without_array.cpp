#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    static int c;
    public:
    void setdata();
    void getdata();
    void input_salary();
    void output_salary();
};
int employee::c;
int main(){
    employee harish,gary,hretfghjh;
    harish.setdata();
    harish.getdata();
    harish.input_salary();
    harish.output_salary();
    gary.setdata();
    gary.getdata();
    gary.input_salary();
    gary.output_salary();
    hretfghjh.setdata();
    hretfghjh.getdata();
    hretfghjh.input_salary();
    hretfghjh.output_salary();
    return 0;
}
void employee::setdata(){
    cout<<"Enter id :";
    c++;
    cin>>id;
}
void employee::getdata(){
    cout<<"The id of employee "<<c<<" is "<<id<<endl;
}
void employee::input_salary(){
    cout<<"Enter salary :";
    cin>>salary;
}
void employee::output_salary(){
    cout<<"The salary of employee "<<c<<" is "<<salary<<endl;
}