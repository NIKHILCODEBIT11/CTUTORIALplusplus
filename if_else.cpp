#include<iostream>
using namespace std;
int main(){
    cout<<"invitation to the party"<<endl;
    cout<<"enter age :";
    int age;
    cin>>age;
    if(age<18&&age>2){
        cout<<"you are not invited sorry !!!";
    }
    else if(age==18){
        cout<<endl<<"you are invited but with kid pass";
    }
    else if(age<2){
        cout<<"drink milk !!!";
    }
    else{
        cout<<endl<<"you are invited";
    }
    return 0;
}