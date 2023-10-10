/*
IF I ONLY DID UPTO ABOVE WITH NECESSARY DETAILS IN MAIN
THEN IT WILL GIVE ERROR 

TO SOLVE THIS ERROR " WHEN I HAVE TO GIVE PERMISSION TO
A FUNCTION OF OTHER CLASS TO ACCESS THE PVT DATA OF ANY
OTHER CLASS , FIRST OF ALL I HAVE TO DECLARE THAT CLASS
AND WRITE PUBLIC OR PVT DATA THAT I NEED IN THAT CLASS USING
FORWARD DECLARATION THEN WRITE THE OTHER CLASS WHO HAS TO 
ACCESS THE MEMBER VARAIBLES AND FUNCTION OF THE PREV CLASS.
"*/

#include<iostream>
using namespace std;
// FORWARD DECLARATION :-
class complex;

class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    // BELOW WILL SHOW ERROR AS BECAUSE OF FORWARD DECLARATION , COMPILER
    //ONLY KNOWS THAT THERE IS A CLASS COMPLEX , BUT DON'T KNOW WHETHER
    //THAT CLASS COMPLEX HAS OBJECT o1 AND o2 , SO TO SOLVE 
    //THIS ERROR I WILL JUST DEFINE BOTH CLASS IN ARGUMENTS BUT WON'T
    //GIVE OBJECTS , I WILL GIVE PASS OBJECTS DURING THE FUNCTION CALL
    // DIRECTLY AS I WAS DOING PREVIOUSLY. 


    /*int sum_real_complex(complex o1,complex o2){

    }
    */
int sum_real_complex(complex,complex);
int sum_complex_complex(complex,complex);
};
class complex{
    int a,b;
    // BELOW IS A WAY TO DECLARE FUNCTIONS AS FRIEND INDIVIDUALLY FROM A DIFF CLASS NAMED calculator.
    friend int calculator::sum_real_complex(complex o1,complex o2);
    friend int calculator::sum_complex_complex(complex,complex);
    /* BUT SUPPOSE I HAVE MANY FUNCTIONS IN A PARTICULAR 
    CLASS LET SAY 200 AND I WANT THAT ALL 200 OF THEM TO
    ACCESS THE PRIVATE MEMBERS OF COMPLEX THEN I CAN'T JUST
     MAKE FRIEND TO ALL THEN I WILL MAKE 
    FRIEND TO THE WHOLE calculator CLASS BY USING 
    BELOW SYNTAX :- */
    
    // ALITER : DECLARING THE ENTIRE calculator CLASS AS FRIEND.


    // friend calculator;


    public:
    void set_number(int n1,int n2);
    void print_number();
};
int main(){
    int n1,n2,n3,n4;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;
    cout<<"Enter n3:";
    cin>>n3;
    cout<<"Enter n4:";
    cin>>n4;
    complex o1,o2;
    o1.set_number(n1,n2);
    o1.print_number();
    o2.set_number(n3,n4);
    o2.print_number();
    calculator calc/*calc1 i can even add one more variable here and can call using that.*/;
    // calc.sum_real_complex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<calc.sum_real_complex(o1,o2)<<endl;
    // int res=calc1.sum_complex_complex(o1,o2); i can call like this also after defining one more object in class calculator.
    int res=calc.sum_complex_complex(o1,o2);
    cout<<"The sum of complex part of o1 and o2 is "<<res;
    return 0;
}
int calculator::sum_real_complex(complex o1,complex o2){
    return (o1.a+o2.a);
}
void complex::set_number(int n1,int n2){
    a=n1;
    b=n2;
}
void complex::print_number(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
int calculator::sum_complex_complex(complex o1,complex o2){
    return (o1.b+o2.b);
}