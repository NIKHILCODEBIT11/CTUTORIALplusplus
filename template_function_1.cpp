#include<iostream>
using namespace std;

template <class t1,class t2>
float funcavg(t1 a, t2 b){
    return (a+b)/2.0;
}
int main(){
    float c=funcavg(3,4);       // Unlike class, here i won't have to again specify "t1", "t2" inside of <>.
    printf("The avg value of %d and %d is %.4f\n",3,4,c);

    float d=funcavg(3.434,54.34);
    cout<<"The avg value of "<<3.434<<" and "<<54.34<<" is "<<d<<endl;
    return 0;
}