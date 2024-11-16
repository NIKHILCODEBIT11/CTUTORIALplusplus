#include<iostream>
#include<vector>
using namespace std;

// Output of elements of the vector :-

void display(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
    display(v);

    /*
    Syntax for inserting element in the middle of container :-       For that i will require "ITERATOR", which will point to the
    element before which i need to insert element and along with that how many elements i want to insert.
    */

   vector <int> :: iterator iter = v.begin();   // This means i am making an "ITERATOR" with name "iter", which will point to the beginning element of container.
  
   v.insert(iter+1,566);   // "566" is getting inserted "BEFORE (iter+1)" FOR BY DEFAULT "1" TIME ONLY.
   display(v);

    return 0;
}