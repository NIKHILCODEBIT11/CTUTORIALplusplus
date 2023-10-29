#include<iostream>
using namespace std;
class students{
    protected:
    int roll_number;
    public:
    void set_number(int a){
        roll_number=a;
    }
    void print_number(void);
};
void students :: print_number(void){
    cout<<"The roll number is "<<roll_number<<endl;
}
class test:virtual public students{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"The marks of student are :-"<<endl
        <<maths<<endl
        <<physics<<endl;
    }
};
class sports:public virtual students{
    protected:
    float score;
    public:
    void set_score(int s){
        score=s;
    }
    void print_score(void){
        cout<<"The score is "<<score<<endl;
    }
};
class result:public test, public sports{
    private:
    float total;
    public:
    void display(){
        cout<<"For student with below credentials :-"<<endl;
        // print_number();
        print_marks();
        print_score();
        cout<<"The total score is "<<maths+physics+score<<endl;
    }
};
int main(){
    int a,d;
    float b,c;
    cout<<"Enter roll number ";
    cin>>a;
    cout<<"Enter marks in maths ";
    cin>>b;
    cout<<"Enter marks in physics ";
    cin>>c;
    cout<<"Enter score ";
    cin>>d;
    result harry;
    harry.set_number(a);
    harry.set_marks(b,c);
    harry.set_score(d);
    harry.display();
    return 0;
}