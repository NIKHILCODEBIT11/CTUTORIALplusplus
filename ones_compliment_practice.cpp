#include<iostream>
using namespace std;
class binary{
    string s;
    public:
    void read();
    void chk_binary();
    void ones_compliment();
    void display();
};
int main(){
    binary n;
    n.read();
    n.chk_binary();
    n.ones_compliment();
    n.display();
    return 0;
}
void binary :: read(){
    cout<<"Enter the number :";
    cin>>s;
}
void binary :: chk_binary(){
    for(int i=0;i<s.size();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"It is not a binary number"<<endl;
            exit(0);
        }
    }
    cout<<"It is a binary number"<<endl;
    cout<<s<<endl;
}
void binary::ones_compliment(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
    }
}
void binary :: display(){
    cout<<"The binary number is "<<s
    <<endl;
    for(int i=0;i<s.size();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}