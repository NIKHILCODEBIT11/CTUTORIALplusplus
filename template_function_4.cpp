#include<iostream>
using namespace std;

template <class t>
class info{
    public:
    t data;
    info(t a){
        data=a;
    }
    void display();
};

template <class t>
void info <t> :: display(){

// void info <class t> :: display(){ ------> I t is invalid, as i can't rewrite <class t>, i should write only <t>.
                                    // Error 1 :- using template type parameter 't' after 'class'
                                    // Error 2 :- template argument 1 is invalid
// Error 3 :- 
// template_overloading.cpp: In function 'void display()':
// template_overloading.cpp:16:11: error: 'data' was not declared in this scope
//     cout<<data<<endl;
//         ^~~~
    cout<<data<<endl;
}

int main(){
    info <int> a(3);
    a.display();

    info <char> b('v');
    b.display();
    return 0;
}