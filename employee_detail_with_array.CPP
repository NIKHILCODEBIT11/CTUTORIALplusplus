#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    static int count;
    public:
    void setdata();
    void getdata();
    void set_salary();
    void get_salary();
    static int count1;
};
int employee::count;
int employee::count1;
int main(){
    int n;
    cout<<"Enter no. of employee :";
    cin>>n;
    employee employee_detail[n];
    for(int i=0;i<n;i++){
        //employee_detail[i].count=3;  IT IS NOT ACCESSIBLE AS IT IS A PRIVATE VARIABLE.
       // employee_detail[i].count1=9;  IT IS ACCESSIBLE AS THIS TIME I DECLARED STATIC VARIABLE IN PUBLIC.
        employee_detail[i].setdata();
        employee_detail[i].set_salary();
        employee_detail[i].getdata();
        employee_detail[i].get_salary();
    }
        return 0;
}
void employee::setdata(){
    cout<<"Enter id of employee "<<++count1<<" :";
    cin>>id;
    count++;
}
void employee::getdata(){
    cout<<"The id of employee "<<count<<" is "<<id<<endl;
}
void employee::set_salary(){
    cout<<"Enter salary :";
    cin>>salary;
}
void employee::get_salary(){
    cout<<"The salary of employee "<<count<<" is "<<salary<<endl;
}