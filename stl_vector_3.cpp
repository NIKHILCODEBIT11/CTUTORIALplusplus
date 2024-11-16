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
  
   v.insert(iter,503,566);   // "566" is getting inserted "BEFORE iter" FOR 503 TIMES.

   // If i didn't mention "503", then automatically, it will be taken as "1" by default, that means only for "once" the element will be inserted.

   display(v);

    return 0;
}


