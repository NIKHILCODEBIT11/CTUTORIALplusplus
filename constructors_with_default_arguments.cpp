#include<iostream>
using namespace std;
class simple{
    // NOT WORRKING
    int a,b,c;
    public:
    simple(int ,int ,int );
    // simple(int q=9,int h=5,int v=8){
    //     a=q;
    //     b=h;
    //     c=v;
    // }
    void print();
};
int main(){
    simple s(1,2);
    simple k=simple(4);
    k.print();
    s.print();
    return 0;
}
// simple::simple(int x,int y=7){
//     a=x;
//     b=y;
// }
simple::simple(int q=9,int h=5,int v=8){
        a=q;
        b=h;
        c=v;
    }
void simple::print(){
    cout<<"The value of a and b and c is "<<a<<" and "<<b<<" and "<<c<<endl;
}
