#include<stdio.h>
int main(){
    char str[]={1,2,3,4,5};
    char *ptr;
    ptr=str;
    ptr++;
    ptr++;
    printf("%d",*ptr);
    return 0;
}