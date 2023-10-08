#include<iostream>
using namespace std;
class A{
    private:
    int a;
    static int b;
    public:
    void copy(int x,int y);
    void show();
    static void display();
};
int A::b;  // BY RUNNING THIS I AM MAKING VALUE OF STATIC INT b by default '0'.
int main(){
    A l,m,n;
    l.copy(10,20);
    l.show();
    l.display();
    m.copy(40,30);
    m.show();
    m.display();
    n.copy(70,60);
    n.show();
    n.display();
    l.show();
    return 0;

}
void A::copy(int x,int y){
    a=x;
    b=y;
}
void A::show(){
    cout<<a<<" "<<b<<endl;
}
void A::display(){
    // cout<<a;  // AS IT IS A STATIC MEMBER FUNCTION SO ONLY STATIC DATA MEMBER CAN BE ACCESSED.
    cout<<b<<endl;
}