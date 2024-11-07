#include<iostream>
using namespace std;
class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){}
};
class cwhv : public cwh{
    float videolength;
    public:
    cwhv(string s,float r,float vl) : cwh(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"The title of video is "<<title<<endl;
        cout<<"The rating of the video is "<<rating<<endl;
        cout<<"The length of the video is "<<videolength<<" minutes"<<endl<<endl;
    }
};
class cwht : public cwh{
    int words;
    public:
    cwht(string s,float r,int w):cwh(s,r){
        words=w;
    }
    void display(){
        cout<<"The title of document is "<<title<<endl;
        cout<<"The rating of the document is "<<rating<<endl;
        cout<<"The no. of words in document are "<<words<<endl;
    }
};
int main(){
    // FOR cwhv :-
    string title="django video tutorial";
    float rating=4.3;
    float vl=4.44;
    cwhv video(title,rating,vl);

    //FOR cwht :-
    title="django text tutorial";
    rating=4.3;
    int words=443;
    cwht text=cwht(title,rating,words);

    cwh *content[2];  // I made a pointer array of type cwh.
    *content=&video;  // Can als be written as  content[0]=&video;               // The first index of it points to the OBJECT of cwhv.
    content[1]=&text;    // The second index pointer of it points to the OBJECT of cwht.
    (*content)->display();    // can also be written as content[0]->display()
    (*content[1]).display();
    return 0;
}

// I was able to write *content=&video, because the name of array itself is a pointer pointing at 0th index.

/*
############### Rules for virtual funtions :-

-------> They cannot be static.

-------> They are accessed by OBJECT POINTERS.

-------> Virtual functions can be a friend of another class.

------> A vitual function in base class might not be used, that means i can use the function of derived classes as done in example.

------> If a virtual function is defined in a base class, there is no as such necessity of redefining it in the derived class, that means directly even if the pointer pointing at the object of a derived class calls the function, then the function defined at base class would run.


*/