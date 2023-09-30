#include<iostream>
int glo=9;  // global variable
using namespace std;
void sum();
int main(){
    glo=55;
    bool is_true=true;
    sum();
    cout<<glo<<is_true;  // as in main func no local var glo present so printing glo var
    return 0;

}
void sum(){
    int a;
    cout<<glo<<"\n";  // since precedence of local var is more than global var, so local var printed out.
}