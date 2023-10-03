#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("student.txt","w");
    char name[100];
    int roll;
    float cgpa;
    printf("enter string:");
    fgets(name,100,stdin);
    fprintf(fptr,"%s",name);
    printf("enter roll:");
    scanf("%d",&roll);
    fprintf(fptr,"roll = %d \n",roll);
    printf("enter cgpa:");
    scanf("%f",&cgpa);
    fprintf(fptr,"cgpa = %f",cgpa);
    fclose(fptr);
    return 0;
}