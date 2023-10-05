#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a:"<<endl;
    cin>>a;
    for(int i=0;i<=a;i++){
        if(i==3){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}