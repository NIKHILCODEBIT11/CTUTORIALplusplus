#include<iostream>
using namespace std;
class base{
    private:
    int a=3;
    protected:
    int b=4;
    public:
    int c=5;
};
/*
################ FOR A PROTECTED MEMBER :-


                                  PUBLIC DERIVATION         PRIVATE DERIVATION           PROTECTED DERIVATION


    PRIVATE MEMBERS :-             NOT INHERITED              NOT INHERITED                 NOT INHERITED 

    PROTECTED MEMBERS :-             PROTECTED                   PRIVATE                      PROTECTED

    PUBLIC MEMBERS :-                 PUBLIC                     PRIVATE                      PROTECTED

*/
class derived : public base{
      public:
      void get_data();
};
void derived::get_data(){
    cout<<b<<endl;
}
int main(){
    base b;
    derived d;
    // cout<<d.a;
    // cout<<d.b;
    d.get_data();
    cout<<d.c;
}