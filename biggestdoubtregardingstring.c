#include<stdio.h>
int main(){
    char str[100];
    printf("enter string:");
    scanf("%s",str);
    char *ptr=str;
    printf("%s",ptr);
    return 0;
}