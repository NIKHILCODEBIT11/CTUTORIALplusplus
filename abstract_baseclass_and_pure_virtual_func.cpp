#include<iostream>
using namespace std;
class cwh{   // It is an abstract base class as it has 1 pure virtual function and is only being used to make derived classes nothing more.  
    protected:
    string title;
    float rating;
    public:
    cwh(string title,float rating){
        this->title=title;
        this->rating=rating;
    }
    virtual void display()=0;  // It is a "PURE VIRTUAL FUNCTION also called as DO-NOTHING FUNCTION" whose significance is that :-
    // 1) It makes the base class as "ABSTRACT BASE CLASS" as abstract base class must have ATLEAST ONE "PURE VIRTUAL FUNCTION".
    // 2) Being "VIRTUAL FUNCTION" it means that it must have to be replaced in the each derived classes which is derived from the 
    // abstract class where that "VIRTUAL FUNCTION" is defined. 
};
class cwhv : public cwh{
    private:
    float video_length;
    public:
    cwhv(string title,float rating,float video_length):cwh(title,rating){
        this->video_length=video_length;
    }
    void display(){
        cout<<"The title of the video is "<<title<<endl;
        cout<<"The rating of the video is "<<rating<<endl;
        cout<<"The length of the video is "<<video_length<<" minutes"<<endl;
    }
};
class cwht : public cwh{
    private:
    int words;
    public:
    cwht(string title,float rating,int words) : cwh(title,rating){
        this->words=words;
    }
    void display(){
        cout<<"The title of the document is "<<title<<endl;
        cout<<"The rating of the document is "<<rating<<endl;
        cout<<"The no. of words in document are "<<words<<endl;
    }
};
int main(){
    string title="Learn C++";
    float rating=4.95;
    cwhv obj=cwhv(title,rating,4.56);
    cwh *ptr[2];
    ptr[0]=&obj;
    cwht obj_2(title,rating,334);  // If i comment down the display function of class "cwht", then i am getting error as :-
    ptr[1]=&obj_2;               // 1) OBJECT OF ABSTRACT CLASS TYPE "cwht" IS NOT ALLOWED
    ptr[0]->display();           //  2) PURE VIRTUAL FUNC "cwh::display" HAS NO OVERRIDER.
    ptr[1]->display();
    return 0;
}