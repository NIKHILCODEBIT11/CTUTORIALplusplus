#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    static int count;
    public:
    void setdata();
    void getdata();
    static void getcount();
};
int employee::count;
int main(){
    employee harry, rutu, jiuy;
    harry.setdata();
    harry.getdata();
    harry.getcount();
    // employee::getcount(); can also be used in place of harry.getcount();
    rutu.setdata();
    rutu.getdata();
    rutu.getcount();
    // employee::getcount(); can also be used in place of rutu.getcount();
    jiuy.setdata();
    jiuy.getdata();
    employee::getcount();
    // jiuy.getcount(); can also be used in place of employee::getcount();
    return 0;
}
void employee::setdata(){
     cout<<"Enter id :";
     cin>>id;
     count++;
     cout<<endl;
}
void employee::getdata(){
      cout<<"The id of this employee is "<<id<<" and this is employee no."<<count<<endl;;
}
void employee::getcount(){
    // cout<<id; // it will show error as i am trying to access a non static variable from a static function.
    cout<<"The value of count is "<<count<<endl;
}