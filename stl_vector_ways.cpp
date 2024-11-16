#include<iostream>
#include<vector>
using namespace std;

template <class t>
void display(const vector <t> &);

int main(){
    // WAYS TO INITIALIZE VECTORS :-

    vector <int> v1;    // ZERO-LENGTH VECTOR
    v1.push_back(3);
    display(v1);

    vector <char> v2={'w','e','t','u','o'};     
    v2.push_back('3');
    v2.push_back('r');
    v2.push_back('3');
    v2.push_back('r');
    v2.push_back('3');
    v2.push_back('r');
    v2.push_back('3');
    v2.push_back('r');
    display(v2);

    vector <char> v3(v2);       // 13-element "character" vector "FROM V2"
    v3.push_back('e');
    display(v3);

    vector <double> v4(14,6);      // 14-element of 6's
    display(v4);

    vector <char> v5(3);    // 3-element "character" vector which is empty currently but by adding elements i can increase the size of the "vector".
    cout<<"The size of v5 is "<<v5.size()<<endl;
    v5.push_back('e');
    v5.push_back('o');
    cout<<"The size of v5 after pushing elements is "<<v5.size()<<endl;
    return 0;
}

template <class t>
void display(const vector <t> &v){
    cout<<"Displaying vector"<<' ';
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<' ';
    }
    cout<<endl;
}