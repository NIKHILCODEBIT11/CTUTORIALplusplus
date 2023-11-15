#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imag;
    public:
    void set_data(int a1,int a2){
        real=a1;
        imag=a2;
    }
    void get_data(){
        cout<<"The real part is "<<real<<" and the imag part is "<<imag<<endl;
    }
};
int main(){
    complex *iu;
    iu=new complex;
    iu->set_data(22,33);
    iu->get_data();
    return 0;
}