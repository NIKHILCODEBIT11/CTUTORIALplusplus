#include<iostream>
#include<cmath>
//     ALWAYS REMEMBER TO GIVE RETURN TYPE FOR ANY FUNCTION UNTILL 
//     AND UNLESS IT'S VOID OTHERWISE SOMETIME IT MAY NOT GIVE ANSWER.
using namespace std;
class point{
    int x1,y1;
    public:
    point(int x,int y){
        x1=x;
        y1=y;
    }
    point(){};
    void print(){
        cout<<"The point is ("<<x1<<","<<y1<<")"<<endl;
    }
    int distance_x(point o1,point o2){
        int distance_x=o1.x1-o2.x1;
    }
    int distance_y(point o1,point o2){
        int distance_y=o1.y1-o2.y1;
    }
    void distance(int n,int m){
        float distance=sqrt(pow(n,2)+pow(m,2));
        cout<<"The distance is "<<distance<<endl;
    }
};
int main(){
    int u,i,o,y;
    cout<<"Enter x1_1: ";
    cin>>u;
    cout<<"Enter y1_1: ";
    cin>>i;
    cout<<"Enter x1_2: ";
    cin>>o;
    cout<<"Enter y1_2: ";
    cin>>y;
    point c,d;
    point a=point(u,i);
    point b(o,y);
    a.print();
    b.print();
    int q=c.distance_x(a,b);
    int w=c.distance_y(a,b);
    c.distance(q,w);
    cout<<"The distance bet x is "<<q<<endl;
    cout<<"The distance bet y is "<<w<<endl;
    return 0;
}
