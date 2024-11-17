// I am updating the values in an empty list of size "4", instead of pushing back.
#include<iostream>
#include<list>
using namespace std;

void input(list <int> &l){
    list <int> :: iterator iter;
    iter=l.begin();
    int z=l.size(),n=1;
    for(iter;iter!=l.end();iter++,n++){
        cout<<"Enter element at "<<n<<"th position : ";
        cin>>*iter;
    }
}

void output(list <int> &l){
    list <int> :: iterator iter;
    iter=l.begin();
    for(int i=0;i<l.size();i++){
        cout<<*iter<<" ";
        iter++;
    }
}

int main(){
    list <int> list_1(4);
    input(list_1);
    output(list_1);
    return 0;
}