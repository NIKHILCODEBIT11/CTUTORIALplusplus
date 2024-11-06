#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void set_data(int,int);
    void get_data(){
        cout<<"The real part is "<<a<<endl;
        cout<<"The imaginary part is "<<b<<endl;
    }
};
int main(){
    complex *arr=new complex[4];
    // arr->set_data(4,6);
    // arr->get_data();

    (*arr).set_data(6,7);
    (arr+1)->set_data(4,9);
}