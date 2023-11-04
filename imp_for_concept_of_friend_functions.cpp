#include<iostream>
using namespace std;
 class complex ;
// complex o1,o2;
class calculator{
    int y,m;
    public:
     void sum_real_complex(complex,complex)//{
    //     return(o1.a+o2.a);
    // }
    ;
    void sum_complex_complex(complex,complex);
    void print(){
        cout<<"The sum of real part is "<<y<<" and that of imaginary part is "<<m<<endl;
    }

};
class complex{
    int a,b;
    friend void calculator :: sum_real_complex(complex o1,complex o2);
    friend void calculator::sum_complex_complex(complex o1,complex o2);
    public:
    void set_number(int v1,int v2){
        a=v1;
        b=v2;
    }
    void print_number(){
        cout<<"Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
    void calculator::sum_complex_complex(complex o1,complex o2){
        m= o1.b+o2.b;
    }
    void calculator :: sum_real_complex(complex o1,complex o2){
        y=o1.a+o2.a;
    }
int main(){
    complex o1,o2;
    o1.set_number(2,3);
    o1.print_number();
    o2.set_number(4,5);
    o2.print_number();
    calculator c;
    c.sum_real_complex(o1,o2);
    c.print();  // WHILE RUNNING THIS I AM GETTING GARBAGE VALUE FOR IMAG PART AS TILL NOW FUNCTION FOR ADDITION OF COMPLEX PART HAS NOT RAN.
    c.sum_complex_complex(o1,o2);
    c.print();
    return 0;
}
