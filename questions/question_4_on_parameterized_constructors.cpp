#include<iostream>
#include<cmath>
using namespace std;
class point{
    int o,l;
    public:
    friend int distance_x(point q,point w);
    friend int distance_y(point q,point w);
    point(int,int);
    void print_display();
    void diff_in_x(point s,point y);
};
int distance_x(point q,point w);
int distance_y(point q,point w);
void distance(int,int);
int main(){
    int n1,n2,n3,n4;
    cout<<"enter n1 :";
    cin>>n1;
    cout<<"Enter n2 :";
    cin>>n2;
    cout<<"Enter n3 :";
    cin>>n3;
    cout<<"Enter n4 :";
    cin>>n4;
    point a(n1,n2);
    a.print_display();
    point b(n3,n4);
    b.print_display();
    int k=distance_x(a,b);
    int s=distance_y(a,b);
    distance(k,s);
}
void point::print_display(){
    cout<<"The point is ("<<o<<","<<l<<")"<<endl;
}
point::point(int x,int y){
    o=x;
    l=y;
}
int distance_x(point q,point w){
    int r=q.o-w.o;
    cout<<"The diff in x is "<<r<<endl;
    return r;
}
int distance_y(point q,point w){
    int y=q.l-w.l;
    cout<<"The diff in y is "<<y<<endl;
    return y;
}
void distance(int k,int s){
     float j=pow(k,2);
     cout<<j<<endl;
     float j1=pow(s,2);
     cout<<j1<<endl;
     float j2=j1+j;
     cout<<j2<<endl;
     float j3=sqrt(j2);
     cout<<"The distance between points is "<<j3<<endl;
}