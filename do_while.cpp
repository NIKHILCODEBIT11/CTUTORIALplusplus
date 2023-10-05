#include<iostream>
int main(){
    int n;
    std::cout<<"enter n:";
    std::cin>>n;
    // do while loop
    int i=1;
    do{
        std::cout<<i<<std::endl;
        i++;
    }
    while(i<=n);
    return 0;
}