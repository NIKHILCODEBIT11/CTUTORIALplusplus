#include<iostream>
int main(){
    int a;
    std::cout<<"enter a:";
    std::cin>>a;
    for(int i=0;i<=a;i++){
        if(i==3){
            continue;
        }
        std::cout<<i<<std::endl;
    }
    return 0;
}