
#include<iostream>
int glo=9;  // global variable
using namespace std;
void sum();
void sum2();
int main(){
    glo=76; // local variable of function "main"
    cout<<glo<<"\n";  // as in main func no local var glo present so printing glo var
    sum();
    return 0;

}
void sum(){
    int a; 
    cout<<glo<<"\n";
    sum2();  // since precedence of local var is more than global var, so local var printed out.
}
void sum2(){
    cout<<glo;
}