#include<iostream>
#include<vector>
using namespace std;

// Output of elements of the vector :-

void display(vector <int> v){
    for(int i=0;i<v.size();i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<' ';
    }
}

int main(){
    int size,element;
    vector <int> v;
    cout<<"Enter size of the vector :- ";
    cin>>size;

    // Input of elements in a vector :-
    for(int i=0;i<size;i++){
        cout<<"Enter element to add to the vector :- ";
        cin>>element;
        v.push_back(element);

        // cin>>v[i];      // I can even use this for insertion of element into vector, acts just like push_back(), just need to resize vector before using it.

    }

    v.pop_back();

    display(v);
    return 0;
}


