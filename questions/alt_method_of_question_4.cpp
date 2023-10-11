#include<iostream>
#include<cmath>
using namespace std;
class point{
    int a,b;
    friend void distance(point o1,point o2);
    public:
    point(int,int);
    void display();
};
void distance(point o1,point o2);
int main(){
    int o1_x,o1_y,o2_x,o2_y;
    cout<<"Enter o1_x :";
    cin>>o1_x;
    cout<<"Enter o1_y :";
    cin>>o1_y;
    cout<<"Enter o2_x :";
    cin>>o2_x;
    cout<<"Enter o2_y :";
    cin>>o2_y;
    point p=point(o1_x,o1_y);
    p.display();
    point q(o2_x,o2_y);
    q.display();
    distance(p,q);
}
void distance(point o1,point o2){
    int diff_x=o1.a-o2.a;
    cout<<"The diff in x is "<<diff_x<<endl;
    int diff_y=o1.b-o2.b;
    cout<<"The diff in y is "<<diff_y<<endl;
    float distance_between_points;
    distance_between_points=sqrt(pow(diff_x,2)+pow(diff_y,2));
    cout<<"the distance between points is :"<<distance_between_points<<endl;
}
point::point(int x,int y){
    a=x;
    b=y;
}
void point::display(){
    cout<<"The point is ("<<a<<","<<b<<")"<<endl;
}