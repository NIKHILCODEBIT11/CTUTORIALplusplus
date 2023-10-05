#include<iostream>

// IF I WILL REMOVE '//' FROM LINE 12 THROUGH b THEN WILL SHOW ERROR.
int main(){
    // int a=66;
    // std::cout<<"The value of a is "<<a<<std::endl;
    // a=88;
    // std::cout<<"The value of a now is "<<a<<std::endl;
    // return 0;
    const int b=88;
    std::cout<<"The value of b is "<<b<<std::endl;
    // b=85;  // SINCE I AM ASSIGNING A NEW VALUE TO A CONSTANT VARIABLE, THAT'S WHY IT WON'T CHANGE AND WILL SHOW ERROR.
    std::cout<<"The new value of b is "<<b<<std::endl;
    return 0;
}