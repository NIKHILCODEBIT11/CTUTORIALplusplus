#include<iostream>
int factorial(int n);
int main(){
    // factorial of a number :
    int n;
    std::cout<<"enter n :";
    std::cin>>n;
    std::cout<<"The factorial of "<<n<<" is "<<factorial(n);
}
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*factorial(n-1);
    /* step by step calculation of factorial(4)
     factorial(4)= 4 * factorial(3);
     factorial(4)=4 * 3 * factorial(2);
     factorial(4)=4 * 3 * 2 * factorial(1);
     factorial(4)=4 * 3 * 2 * 1;
     */

}