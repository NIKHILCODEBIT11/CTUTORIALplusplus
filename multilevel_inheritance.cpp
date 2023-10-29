#include<iostream>
using namespace std;
class student{
    private:
    int user_id;
    protected:
    int roll_number;
    public:
    void set_roll_number(int r);
    void get_roll_number(void);
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student :: get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}
class exams : public student{
    protected:
    float maths;
    float physics;
    public :
    void set_marks(float m1,float m2);
    void get_marks();
};
void exams :: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exams::get_marks(void){
    cout<<"The marks in maths and physics are "<<maths<<" and "<<physics<<endl;
}
class result : public exams{
    float percentage;   // since nothing mentioned , so it is by default private.
    public:
    void display(void){
        // cout<<"The roll number of this student is "<<roll_number<<endl;
        get_roll_number();
        get_marks();
        // cout<<"The marks in math and physics are "<<maths<<" and "<<physics<<endl;
        cout<<"The percentage is "<<(maths+physics)/2<<endl;
    }
};
int main(){
    /*
    If i am inheriting B from A and C from B  [ A---> B --->c ] 
    1. A is the base class for B and B is the base class for C.
    2. A---> B ---> C is called as inheritance path.
    */
    result harry,sujall;
    harry.set_roll_number(77);
    harry.set_marks(77.0,88.3);
    harry.display();
    sujall.set_roll_number(76);
    sujall.set_marks(72.0,84.3);
    sujall.display();
    return 0;
}