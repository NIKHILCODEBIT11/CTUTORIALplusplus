#include<iostream>
int main(){
    int a,b;
    std::cout<<"enter value of a:";
    std::cin>>a;
    std::cout<<"enter value of b:";
    std::cin>>b;
    std::cout<<"following are the types of operators in C++ :- \n";
    //ARITHMETIC OPERATORS
    std::cout<<"hi"<<std::endl;
    std::cout<<"The value of a+b is "<<a+b<<std::endl;
    std::cout<<"The value of a-b is "<<a-b<<std::endl;
    std::cout<<"The value of a*b is "<<a*b<<std::endl;
    std::cout<<"The value of a/b is "<<a/b<<std::endl;
    std::cout<<"The value of a%b is "<<a%b<<std::endl;
    std::cout<<"The value of a++ is "<<a++<<std::endl;   //first of all use 'a' from previous available value then //update it.Here value used is a=2, then updated to a=3 and that value a=3 goes ahead in further program //instead of a=2.
    std::cout<<"The value of a-- is "<<a--<<std::endl;   //first of all use 'a' from previous available value then //update it.Here value used is a=3, then updated to a=2 and that value a=2 goes ahead in further program //instead of a=3.
    std::cout<<"The value of ++a is "<<++a<<std::endl;   //first of all update 'a' from previous available //value.Here value that came previously is a=2, so firstly it got updated to a=3 then only printed and pass on //same value forward.
    std::cout<<"The value of --a is "<<--a<<std::endl;   //first of all update 'a' from previous available //value.Here value that came previously is a=3, so firstly it got updated to a=2 then only printed and pass on //same value forward.
    std::cout<<std::endl;  //just for next line to distinguish between output messeges.
    // COMPARISION OPERATOR :-
    std::cout<<"Following are the types of comparision operators :-";
    std::cout<<std::endl;
    std::cout<<"(GIVE 1 FOR TRUE AND 0 FOR FALSE):-";
    std::cout<<std::endl;
    std::cout<<"The value of a==b is "<<(a==b)<<std::endl;  // I t compares both a and b and gives 1 for true and 0 for false.
    std::cout<<"The value of a!=b is "<<(a!=b)<<std::endl;  // It gives whether a =b or not , gives 1 for true and 0 for false.
    std::cout<<"The value of a>=b is "<<(a>=b)<<std::endl;  // It gives whether a>+b or not  , gives 1 for true and 0 for false.
    std::cout<<"The value of a<=b is "<<(a<=b)<<std::endl;  // It gives whether a<=b or not  , gives 1 for true and 0 for false.
    std::cout<<"The value of a>b is "<<(a>b)<<std::endl;  // It gives whether a>b or not  , gives 1 for true and 0 for false.
    std::cout<<"The value of a<b is "<<(a<b)<<std::endl<<std::endl;  // It gives whether a<b or not  , gives 1 for true and 0 for false.
    std::cout<<std::endl;
    // LOGICAL OPERATOR :- 
    std::cout<<"The value of this logical 'and' operator ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<std::endl;  // It gives whether ((a==b)&&(a<b)) or not  , gives 1 for true and 0 for false.
    std::cout<<"The value of this logical 'or' operator ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<std::endl;  // It gives whether ((a==b)||(a<b)) or not  , gives 1 for true and 0 for false.
    std::cout<<"The value of this logical 'not' operator (!(a==b)) is "<<(!(a==b))<<std::endl;  // It gives whether (!(a==b)) or not  , gives 1 for true and 0 for false.
    return 0;
}