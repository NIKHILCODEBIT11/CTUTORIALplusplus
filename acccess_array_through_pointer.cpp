#include<iostream>
int main(){
    int marks[]={22,44,56,78,654};
    int* ptr=marks; // That means ptr is storing the address of marks[0].
    std::cout<<*ptr<<std::endl;
    ptr++;
    std::cout<<*ptr<<std::endl;
    std::cout<<*(ptr++)<<std::endl;
    std::cout<<*(++ptr)<<std::endl;
    return 0;
}