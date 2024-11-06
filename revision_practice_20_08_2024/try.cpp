#include<iostream>
using namespace std;
int main(){
    int *ptr2= new int[7];
    for(int i=0;i<7;i++){
        cout<<"Enter value at "<<i<<"th index : ";
        cin>>*(ptr2+i);
    }
    int i=0;
    while(i<7){
        cout<<*(ptr2+i)<<endl;
        i++;
    }
    return 0;
}