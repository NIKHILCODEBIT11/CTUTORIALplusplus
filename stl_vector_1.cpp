#include<iostream>
#include<vector>
using namespace std;

// Output of elements of the vector :-

void display(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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

        // cin>>v[i];      // The problem with this is explained below 

    }
    display(v);
    return 0;
}


/*
Explaination of the problem :-

Since, "VECTOR" is not same as "ARRAY", as it differs because unlike "ARRAY" in "VECTOR", the size of "VECTOR" is not defined during 
compile time, rather, it's size is fixed uring run time.

That's why before inserting each element to "v[i]", i will have to resize or define the size of vector, as much size i need, as it 
can't go ahead of the "for" loop boundary, because at start the "VECTOR" was completely empty.
*/