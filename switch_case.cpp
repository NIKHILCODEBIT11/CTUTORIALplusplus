#include<iostream>
int main(){
    int age;
    std::cout<<"enter age:";
    std::cin>>age;
    // SELECTION CONTROL STRUCTURE : SWITCH CASE
    switch(age){
        case 18:std::cout<<"You are 18"<<"."<<std::endl;
        //break;
        case 23:std::cout<<"You are 23"<<"."<<std::endl;
        break;
        default:std::cout<<"no special case"<<"."<<std::endl;
        break;
    }
    return 0;
}