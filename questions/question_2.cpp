#include<iostream>
// Write a program to take input in arrays and print output using while loop.
int main(){
    int n;
    std::cout<<"enter n:";
    std::cin>>n;
    int marks[n];
    int i=0;
    while(i<n){
        std::cout<<"marks at "<<i<<"th index :";
        std::cin>>marks[i];
        i++;
        }
        i=0;
        while(i<n){
            std::cout<<"marks at "<<i<<"th index is "<<marks[i]<<std::endl;
            i++;
        }
        return 0;
}