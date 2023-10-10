#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int,int);
    void display_point();
};
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
    
    // Implicit call
    point a(n1,n2);
    a.display_point();
    point b=point(n3,n4);
    b.display_point();
    return 0;

}
point::point(int a,int b){
    x=a;
    y=b;
}
void point::display_point(){
    cout<<"The point is ("<<x<<","<<y<<")"<<endl;
}