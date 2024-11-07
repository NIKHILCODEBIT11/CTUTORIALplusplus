#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream inp;
    string str,str_2,str_3;
    inp.open("sample_2_read.txt");
    // inp>>str>>str_2;   // if i have written just "inp>>str", then even in output it would have display "Hello" no garbage string for str_2. 
    // cout<<str<<str_2;
    /*
    Instead of getting each word at a time, i can use a loop to get all the content at once.
    */
    while(inp.eof()==0){   // Here "0" signifies false, as much time eof()==0 or i won't get 'END OF FILE' till then loop will run.
        // inp>>str;       // and as soon as i reach eof then condition eof()==0 will becomme false and thus loop will stop running.
        getline(inp,str);
        cout<<str<<endl;  // Since, from getline(), i will get the whole line 1 content out of 'n' lines of content, so i must use "endl"
                            // in order to print content of file from next line as it is present in the file.
    }
    inp.close();

    ofstream out;
    out.open("sample_2_write.txt");
    str_2="Hi i am listening song \nhope you are enjoying the PLaylist.";
    out<<str_2;
    out.close();

    ifstream inp_2;
    inp_2.open("sample_2_write.txt");
    while(inp_2.eof()==0){
        getline(inp_2,str_3);
        cout<<str_3<<endl;
    }
    inp_2.close();
    return 0;
}