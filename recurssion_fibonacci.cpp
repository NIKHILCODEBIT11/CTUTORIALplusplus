#include<iostream>
int fibonacci(int);
int main(){
    int n;
    std::cout<<"enter n :";
    std::cin>>n;
    std::cout<<"The value of "<<n<<"th number in fibonacci series is "<<fibonacci(n);
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
    /*
    for n=6;
    fibonacci(5)+fibonacci(4)
    fibonacci(4)+fibonacci(3)+fibonacci(3)+fibonacci(2)
    fibonacci(3)+fibonacci(2)+fibonacci(2)+fibonacci(1)+fibonacci(1)+fibonacci(0)
    fibonacci(2)+fibonacci(1)+fibonacci(1)+fibonacci(0)+fibonacci(1)+fibonacci(0)+1+1+0
    fibonacci(1)+fibonacci(0)+1+1+0+1+0+1+1+0
    1+0+1+1+0+1+0+1+1+0*/
}