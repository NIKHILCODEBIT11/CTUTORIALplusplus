#include<iostream>
int main(){
    // array example
    int n;
    std::cout<<"enter n:";
    std::cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
    std::cout<<"enter marks at "<<i<<"th index:";
    std::cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        std::cout<<"marks at "<<i<<"th index is "<<marks[i]<<std::endl;
    }
    return 0;
}