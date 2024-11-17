// Removing elements from a list using  (1) pop_back()  (2)  pop_front()   (3)   remove()
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
    list <int> list_1(9);
    input(list_1);

    cout<<"Before removing :-"<<endl;
    output(list_1);
    cout<<endl;
    cout<<"The size of list_1 now is "<<list_1.size()<<endl;

    cout<<"Using pop_back() :-"<<endl;
    list_1.pop_back();
    output(list_1);
    cout<<endl;
    cout<<"The size of list_1 now is "<<list_1.size()<<endl;

    cout<<"Using pop_front() :-"<<endl;
    list_1.pop_front();
    output(list_1);
    cout<<endl;
    cout<<"The size of list_1 now is "<<list_1.size()<<endl;

    cout<<"Using remove() :-"<<endl;
    list_1.remove(3);       // It will remove all the "AVAILABLE OCCURENCES" of "3" from list "list_1"
    output(list_1);
    cout<<endl;
    cout<<"The size of list_1 now is "<<list_1.size()<<endl;
    
    return 0;
}