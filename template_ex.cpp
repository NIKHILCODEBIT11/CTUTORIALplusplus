#include<iostream>
using namespace std;

template <class t>
class vector{
    public:
    int size;   // Here i used int, because i am using "size" to define the length of array in below and so it must be "int".
    t* ptr;
    vector(int m){
        size=m;
        ptr=new t[size];    // Here i want "size" as "int".
    }
    t dotproduct(vector &v){
        t d=0;
        for(int i=0;i<size;i++){
            d+=this->ptr[i]*(v.ptr[i]);
        }
        return d;
    }
};
int main(){
    vector <float> v1(4);
    v1.ptr[0]=2.2;
    v1.ptr[1]=3.32;
    v1.ptr[2]=2.4;
    v1.ptr[3]=5;
    vector <float> v2(4);
    v2.ptr[0]=3.3;
    v2.ptr[1]=5.43;
    v2.ptr[2]=4.4;
    v2.ptr[3]=3.45;
    float a = v2.dotproduct(v1);
    cout<<a<<endl;
    return 0;
}