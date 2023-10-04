#include<iostream>
using namespace std;
int main(){
    /*
    size of double is 8 bytes
    size of float is 4 bytes
    size of long double is 12 bytes
    */
    float d=34.4;
    long double e=34.4;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The size of d is "<<sizeof(d)<<endl;
    cout<<"The size of e is "<<sizeof(e)<<endl;
    cout<<endl;
    cout<<"The value of d is "<<d<<"."<<endl<<"The value of e is "<<e<<"."<<endl;
    return 0;
}