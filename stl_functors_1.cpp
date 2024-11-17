#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

/*
Function objects :-

------> It is a function wrapped in a class, so that it is available like an "OBJECT".

why i needed function objects ??????

-------> I needed "Function objects" so that i can use all of them in "object oriented paratime".

-------> "FUNCTION OBJECT" represents a function, but is an object which will act like "OBJECT".

-------> There are many "Function objects" available in C++, and to access them i will have to use the header file "functional"
*/


int main(){
    int arr[]={33,45,2,34,567,22};
    // Now i want to sort the elements, so i will have to use algorithm "sort()", for which i will have to include header file "algorithm"

    cout<<"Default sorting :- "<<endl;
    sort(arr,arr+5);    // Here "arr + 5" represents till which element it will sort, starting from 1st element to nth element{arr+5}.
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Above i sorted the array in increasing order.


    // Refer below for sorting array in descending order.
    cout<<"Sorting after passing a FUNCTOR {greater <int>()} :-"<<endl;
    sort(arr, arr+5, greater<int>());       // greater <int>() is a function object or "functor" for sorting elements in decreasing order.
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    // Since, sort() method takes an object {by default object which does ascending sorting}

    cout<<endl;
    return 0;
}