#include<iostream>
#include<list>
using namespace std;

void input(list <int> &);
void output(list <int> &l){
    list <int> :: iterator iter;        // I am printing output using "iterator iter"
    iter=l.begin();                     // The pointer "iter" points to the beginning element of list
    for(iter;iter!=l.end();iter++){     // since iter = l.begin() already , the end condition is "iter" reaching upto end of list.  
        cout<<*iter<<" ";               // printing the value using  '*' operator
    }
}
int main(){
    list <int> list_1;      // List of 0-length
    list <int> list_2(4);   // Empty list of size 4

    // Pushing elements to list1 :-

    input(list_1);      // When i am running this i am not getting any output because "SIZE OF LIST list_1 IS 0."
    output(list_1);

    input(list_2);      // I am facing an error where, i am stuck in an infinite loop after calling to  input(list_2).
    output(list_2);
    return 0;
}
void input(list <int> &l){
    int e;
    int n=l.size();
    for(int i=0;i<n;i++){
        cout<<"Enter element at list : ";
        cin>>e;
        l.push_back(e);
    }
}