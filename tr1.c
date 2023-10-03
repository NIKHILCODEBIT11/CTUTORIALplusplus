#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter number:");
        scanf("%d",&n);
        if(n%2==0){
            printf("try again \n");
        }
        else if(n%2!=0){
                printf("you odd");
                break;
            }
        }
        while(1);
        return 0;
    }