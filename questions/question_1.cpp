#include<iostream>
// write table of any number using do while loop
int main(){
    int n;
    std::cout<<"enter n:";
    std::cin>>n;
    int i=1;
    do{
        std::cout<<n<<"*"<<i<<"="<<n*i<<std::endl;
        i++;
    }
    while(i<11);
    return 0;
}