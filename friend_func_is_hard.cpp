#include<iostream>
using namespace std;
class points{
    private:
    int a;
    int b;
    public:
    friend void print();
    void hi(){
        cout<<"hi"<<endl;
    }
    points(){};
    points(int v1,int v2);
};
void print(){
    points o1;
    o1.hi();
    cout<<"The point is ("<<o1.a<<","<<o1.b<<")"<<endl;
}
int main(){
    int n1,n2;
    cout<<"Enter n1 and n2 :";
    cin>>n1>>n2;
    points a=points(n1,n2);
    print();
    return 0;
}
points::points(int v1,int v2){
    a=v1;
    b=v2;
}
