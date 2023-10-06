#include<iostream>
using namespace std;
int sum(int,int);
int sum(int,int,int);
// volume of cylinder
float volume(float,float);
// volume of cube
float volume(float);
// volume of cuboid
float volume(float,float,float);
int main(){
    int a,b;
    int c,d,e;
    cout<<"enter a b c d e :"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"The value of sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The value of sum of c d and b is "<<sum(c,d,b)<<endl;
    cout<<"The volume of cube is "<<volume(a)<<endl;
    cout<<"The volume of cylinder is "<<volume(b,c)<<endl;
    cout<<"The volume of cuboid is "<<volume(a,d,e)<<endl;
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int sum(int c,int d,int e){
    return c+d+e;
}
float volume(float f,float g,float h){
    return f*g*h;
}
float volume(float i,float j){
    return 3.14*i*i*j;
}
float volume(float k){
    return k*k*k;
}