#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // Opening a file using constructor and writing to it.
    string str="hi, Today is 07-11-2024.";
    ofstream out("sample.txt");  // Write operation
    out<<str;
    out.close();

    // Opening a file using constructor and reading from it.
    ifstream inp("sample_read.txt");
    inp>>str;  // If i use this syntax, then i will get only a word before blank space.
    getline(inp,str);   // But by using this "getline()" function i can get the whole line of text. { ONLY A SINGLE LINE EVEN IF THERE ARE MANY LINES OF TEXT }
    cout<<str<<endl;
    inp.close();
    return 0;
}