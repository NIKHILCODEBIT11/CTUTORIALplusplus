#include<iostream>
using namespace std;
class vector{
    public:
    int size;
    int * ptr;
    vector(int m){
        size=m;
        ptr = new int[size];
    }
    int d=0;
    int dotproduct(vector &v){   // In place of paramter i am using reference variable concept.
        for(int i=0;i<size;i++){
            d+=this->ptr[i]*(v.ptr[i]);
        }
        return d;
    }
};
int main(){
    vector v1(4);
    v1.ptr[0]=2;
    v1.ptr[1]=3;
    v1.ptr[2]=0;
    v1.ptr[3]=6;
    vector v2(4);
    v2.ptr[0]=3;
    v2.ptr[1]=4;
    v2.ptr[2]=2;
    v2.ptr[3]=7;
    int a=v2.dotproduct(v1);
    cout<<a<<endl;
    return 0;
}
/*
This program is working absolutely correctly, but suppose if i insert the data items as "float" instead of "int", then for data type 
"float" i will have to again write the same class, and this time the only difference will be that instead of "int" data type i will 
use "float" data type, which breaks "DRY PRINCIPLE", so i will use "TEMPLATE".
*/