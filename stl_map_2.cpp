// Using different methods like    insert(), size(), max_size(), empty()

#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    map<string,int> marks;

    marks["Harry"]=23;      // "Harry" is key and "23" is value
    marks["Rohan"]=44;
    marks["Raki"]=67;

    marks.insert({{"Hardia",67},{"Rochak",78},{"Dhania",87}});      // Inserting "KEY , VALUE" pair

    map<string,int> :: iterator iter;
    iter=marks.begin();
    for(iter;iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;     // "first" refers to "key" and "second" refers to "value".
    }

    cout<<"The size of the map marks is "<<marks.size()<<endl;
    cout<<"The maximum size of map marks is "<<marks.max_size()<<endl;
    cout<<"The return value for map marks empty method is "<<marks.empty()<<endl;
    cout<<"The value for the key 'Harry' is "<<marks.find("Harry")->second<<endl;   // The "find" method return pointer pointing to the element with key "Harry", so to access it's value i use "Arrow" operator and since, map is "KEY VALUE" PAIR, SO, I USED "second" to access the "SECOND PART" of map that is "VALUE".
    return 0;
}