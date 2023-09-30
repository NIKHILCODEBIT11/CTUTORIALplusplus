#include<iostream>
int main(){
    int a,b;
    std::cout<<"enter value of a:";
    std::cin>>a;
    std::cout<<"enter value of b:";
    std::cin>>b;
    std::cout<<"following are the types of operators in C++ :- \n";
    //ARITHMETIC OPERATORS
    std::cout<<"The value of a+b is "<<a+b<<"\n";
    std::cout<<"The value of a-b is "<<a-b<<"\n";
    std::cout<<"The value of a*b is "<<a*b<<"\n";
    std::cout<<"The value of a/b is "<<a/b<<"\n";
    std::cout<<"The value of a%b is "<<a%b<<"\n";
    std::cout<<"The value of a++ is "<<a++<<"\n";   //first of all use 'a' from previous available value then update it.Here value used is a=2, then updated to a=3 and that value a=3 goes ahead in further program instead of a=2.
    std::cout<<"The value of a-- is "<<a--<<"\n";   //first of all use 'a' from previous available value then update it.Here value used is a=3, then updated to a=2 and that value a=2 goes ahead in further program instead of a=3.
    std::cout<<"The value of ++a is "<<++a<<"\n";   //first of all update 'a' from previous available value.Here value that came previously is a=2, so firstly it got updated to a=3 then only printed and pass on same value forward.
    std::cout<<"The value of --a is "<<--a<<"\n";   //first of all update 'a' from previous available value.Here value that came previously is a=3, so firstly it got updated to a=2 then only printed and pass on same value forward.
    return 0;
}