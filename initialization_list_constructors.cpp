#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    // test(int a1,int a2) : a(a1),b(a2){  // IT MEANS ASSIGN VALUES a1 AND a2 TO a AND b.
    // test(int a1,int a2):a(a1),b(a1+7){
    // test(int a1,int a2) : a(a1),b(a+a1){
    // test(int a1,int a2):b(a2),a(b+a2){
    test(int a1,int a2):a(a1){
        b=a2;
        cout<<"Value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    int a1,a2;
    cout<<"Enter a1 and a2 :";
    cin>>a1>>a2;
    test t(a1,a2);
    return 0;
}