#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    map<string,int> marks;

    marks["Harry"]=23;      // "Harry" is key and "23" is value
    marks["Rohan"]=44;
    marks["Raki"]=67;

    map<string,int> :: iterator iter;
    iter=marks.begin();
    for(iter;iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;     // "first" refers to "key" and "second" refers to "value".
    }
    return 0;
}