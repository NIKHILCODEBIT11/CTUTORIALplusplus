#include<iostream>
int main(){
    // ************* REFERENCE VARIABLE *************
    // Rohan das-----> Monty -------> Rahi
    // (real name)  (nick name)  (call by friend)  but all names are of a single person
    float d=455;
    float &y=d;
    std::cout<<d<<std::endl;
    std::cout<<y<<std::endl;
    return 0;
}