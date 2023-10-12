#include<iostream>
#include<string.h>
using namespace std;
typedef class binary{
    private:
    string s;
    public:
    void chk_bin();
    void read();
    void ones_compliment();
    void display();
    void display_1();
}bi;
int main(){
    bi k;
    k.read();
    k.chk_bin();
    k.display();
    k.ones_compliment();
    k.display_1();
    return 0;
}
void binary::chk_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"Not a binary number";
            exit(0);
        }
    }
}
void binary::read(){
    cout<<"Enter a binary number :";
    cin>>s;
}
void binary::display(){
    cout<<"BINARY NUMBER IS :"<<endl;
    for(int i=0;i<s.size();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary::ones_compliment(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void bi::display_1(){
    cout<<"The binary number after ones compliment is :";
    cout<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}