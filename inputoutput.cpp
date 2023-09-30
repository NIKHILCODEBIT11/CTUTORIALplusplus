#include<iostream>
int main(){
    int number_1,number_2;
    std::cout<<"Enter the value of number 1:";  // '<<' IS CALLED AS INSERTION OPERATOR.
    std::cin>>number_1;
    std::cout<<"Enter the value of number 2:";
    std::cin>>number_2;                           // '<<' IS CALLED AS EXTRACTION OPERATOR.
    std::cout<<"The value of sum is "<<number_1+number_2;
    return 0;
}