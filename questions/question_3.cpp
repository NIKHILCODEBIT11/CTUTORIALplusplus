#include<iostream>
// Write a program to take input in arrays and print output using do while loop.
int main(){
    int n;
    std::cout<<"enter n:";
    std::cin>>n;
    int marks[n];
    int i=0;
    do{
        std::cout<<"enter mark at "<<i<<"th index:";
        std::cin>>marks[i];
        i++;
    }
    while(i<n);
    i=0;
    do{
        std::cout<<"marks["<<i<<"]="<<marks[i]<<std::endl;
        i++;
    }
    while(i<n);
    return 0;

}