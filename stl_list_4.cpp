// Sorting elements of list using sort(), merging lists using merge(), reversing list using reverse()

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
    cout<<endl;
}

int main(){
    list <int> list_1(9);
    cout<<"Updating values for list_1 :-"<<endl;
    input(list_1);

    list <int> list_2(7);
    cout<<"updating values for list_2 :-"<<endl;
    input(list_2);

    cout<<"Displaying list_1 without any operation :-"<<endl;
    output(list_1);
    cout<<"Displaying list_2 without any operation :- "<<endl;
    output(list_2);

    cout<<"Displaying list_1 after sorting :-"<<endl;
    list_1.sort();
    output(list_1);

    cout<<"Displaying list_2 after reversing :-"<<endl;
    list_2.reverse();
    output(list_2);

    cout<<"Merging list_1 and list_2 :-"<<endl;
    list_1.merge(list_2);
    output(list_1);
    return 0;
}