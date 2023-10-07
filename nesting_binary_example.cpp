#include<iostream>
using namespace std;
class binary{
    string s;
    public:
    void read();
    void ones_compliment();
    void display();
    void chk_bin();
};
int main(){
    binary e;
    e.read();
    e.display();
    //e.chk_bin();  // i can just use this member in member ones_compliment before running ones_compliment.
    //nesting of member chk_bin()
    // user will not get to see chk_bin() running it will be done by program internally no headache for user.
    e.display();
    e.ones_compliment();
    e.display();
    return 0;
}
void binary::chk_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"NOT BINARY"<<endl;
            exit(1);
        }
    }
}
void binary::display(){
    cout<<"DISPLAYING YOUR BINARY NUMBER"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary::ones_compliment(){
     chk_bin();  // here i don,t need to write any object because the defined ones_compliment is already accessing it.
     for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
     }
}
void binary::read(){
    cout<<"enter binary number:";
    cin>>s;
}