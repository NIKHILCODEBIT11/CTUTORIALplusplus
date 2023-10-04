#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)calloc(n,sizeof(int));
    int j=1;
    for(int i=0;i<n,j<2*n;i++,j=j+2){
        if(j%2!=0){
        ptr[i]=j;
        }
    }
    for(int i=0;i<n;i++){
        printf("ptr[%d]=%d \n",i,ptr[i]);
    }
    int k;
    printf("enter k:");
    scanf("%d",&k);
    realloc(ptr,k);
    int m=0;
    for(int i=0;i<k,m<2*k;i++,m=m+2){
        if(m%2==0){
        ptr[i]=m;
        }
    }
    for(int i=0;i<k;i++){
        printf("ptr[%d]=%d \n",i,ptr[i]);
    }
    return 0;
}