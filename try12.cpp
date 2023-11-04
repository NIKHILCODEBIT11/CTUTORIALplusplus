#include<iostream>
using namespace std;
  // global variable
int main(){
    string s;
    cout<<"Enter number :";
    cin>>s;
    int n=0;
    cout<<s.length()<<endl;
    for(int i=0;i<s.length();i++){
        cout<<n<<endl;
        n=n+s.at(i);
       // cout<<n<<endl;
        // cout<<s.at(i)<<endl;
    }
     cout<<n<<endl;
    if(n%2==0){
        cout<<"Divisible by 3"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
}