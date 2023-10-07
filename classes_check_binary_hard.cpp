#include<iostream>
#include<string.h>
using namespace std;
class binary{
    private:
    string s;
    public:
    void chk_bin();
    void read();
    void ones_compliment();
    void display();
};
int main(){
    binary k;
    k.read();
    k.chk_bin();
    k.display();
    k.ones_compliment();
    k.display();
    return 0;
}
void binary::chk_bin(){
    for(int i=0;i<s.size();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary::read(){
    cout<<"Enter a binary number:";
    cin>>s;
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
void binary::display(){
    cout<<"DISPLAYING YOUR BINARY NUMBER :";
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
