#include<iostream>
using namespace std;
inline int sum(int,int);
int main(){
    int a,b;
    cout<<"enter a and b:"<<endl;
    cin>>a>>b;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    return 0;
}
int sum(int x,int y){
    static int c=0;
    c=c+1;
    return x*y+c;
}