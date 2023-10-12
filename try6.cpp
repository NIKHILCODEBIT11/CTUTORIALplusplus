#include<iostream>
using namespace std;
class employee{
    private:
    int id[100];
    static int count;
    public:
    int set_data();
    void get_data();
};
int employee::count;
int main(){
    int n;
    cout<<"Enter number of employee :";
    cin>>n;
    for(int i=0;i<n;i++){
        employee employee_i;
        employee_i.set_data();
        employee_i.get_data();
        }
        return 0;
    
}
    void employee::get_data(){
    cout<<"The id of employee is "<<id[--count]<<" and this is employee number "<<++count<<endl;
    count++;
    // cout<<count<<endl;
   // cout<<" and this is employee number "<<++count<<endl;
    // cout<<count<<endl;
}
int employee::set_data(){
    cout<<"Enter id of employee "<<(++count)<<" : ";
    cin>>id[--count];
    //  cout<<count<<endl;
}   