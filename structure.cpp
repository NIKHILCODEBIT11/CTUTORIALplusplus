#include<iostream>
typedef struct employee{
    int eID;
    char favchar;
    float salary;
}emp;
int main(){
    emp harry;
    harry.eID=1;
    harry.favchar='d';
    harry.salary=28465343.87;
    std::cout<<"eID of harry is "<<harry.eID<<std::endl;
    std::cout<<"fav char of harry is "<<harry.favchar<<std::endl;
    std::cout<<"salary of harry is "<<harry.salary<<std::endl;
    return 0;

}