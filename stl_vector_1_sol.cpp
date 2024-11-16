#include<iostream>
#include<vector>
using namespace std;

void display(vector <int>&v);
int main(){
    int size;
    vector <int> v;
    cout<<"Enter size :- ";
    cin>>size;

    v.resize(size);

    for(int i=0;i<size;i++){
        cout<<"Enter element : ";
        cin>>v[i];
    }

    display(v);
    return 0;
}
void display(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}