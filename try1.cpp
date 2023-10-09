#include<iostream>
using namespace std;
class complex_numbers{
    int a,b;
    public:
    /* BELOW LINE MEANS THAT NON MEMBER-sum_complex FUNCTION 
    IS ALLOWD TO DO ANYTHING WITH MY PRIVATE MEMBERS.
    */
    friend complex_numbers sum_complex(complex_numbers o1,complex_numbers o2);
    void set_number(int n1,int n2);
    void print_number();
};
// BELOW I AM MAKING A FUNCTION WHICH IS OF THE CLASS DATA TYPE i.e, COMPLEX_NUMBERS , IT IS A FOREIGN FUNCTION.
complex_numbers sum_complex(complex_numbers o1,complex_numbers o2);
int main(){
    int n1,n2,n3,n4;
    cout<<"Enter n1 :";
    cin>>n1;
    cout<<"Enter n2 :";
    cin>>n2;
    cout<<"Enter n3 :";
    cin>>n3;
    cout<<"Enter n4 :";
    cin>>n4;
    complex_numbers o1,o2,o3;
    o1.set_number(n1,n2);
    o1.print_number();
    o2.set_number(n3,n4);
    o2.print_number();
    o3=sum_complex(o1,o2);
    o3.print_number();
    /* // 03.sum_complex(o1,o2);  IT WILL SHOW ERROR AS IT IS NOT A MEMBER FUNCTION OF THE CLASS.
    IT IS JUST AN OUTSIDE FUNCTION OF SAME DATA TYPE CLASS WHICH GOT PERMISSION convert from 
    THE CLASS TO ACCESS THE PRIVATE MEMBERS.
    */
    return 0;
}
void complex_numbers::set_number(int n1,int n2){
    a=n1;
    b=n2;
}
void complex_numbers::print_number(){
    cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
}
/*AFTER RUNNING THE BELOW FOREIGN FUNCTION AND BEING FRIEND WITH CLASS
//IT DOESN'T MEAN THAT THIS FUNCTION IS NOW THE MEMBER FUNCTION OF THAT CLASS
ABSOLUTELY NOT.
*/
complex_numbers sum_complex(complex_numbers o1,complex_numbers o2){
    complex_numbers o3;
    // cout<<a; will show error as i am not clearing to print "a" of which object.
    // point no.6


    /*
    but in member function when i am using an object i can just write cout<<a
    adn will give output as it is member function and can access member variablr
    without any error.
    */
    o3.set_number(o1.a+o2.a, o1.b+o2.b);
    /* if i didn't used friend function then error would have shown in a and b , because those are pvt members of complex and i am not accessing them from member function , 
    //which i am trying to access from a foreign function of same class.
    */
    return o3;
    cout<<endl;
    /* TO ACCESS PRIVATE MEMBERS OF ANY CLASS BY ANY FOREIGN FUNCTION OF SAME DATATYPE i.e, CLASS
 THEN THAT FOREIGN FUNCTION MUST BE  "" FRIEND "" WITH THE CLASS.
 */

/*
######### PROPERTIES OF friend FUNCTIONS :-

(1)  Not in the scope of class or that function is not the member of calss.

(2)  Since it is not in the scope of the class , it cannot be called from the object of that class.

 example :-  c1.sum_complex(o1,o2)== INVALID

(3) CAN BE INVOKED WITHOUT THE HELP OF ANY OBJECT.


(4)    Usually contains objects as arguments. { if not taken then also no problem }


(5)   CAN BE DECLARED INSIDE PUBLIC OR PRIVATE SECTION OF THE CLASS.


(6)   IT CANNOT ACCESS THE MEMBERS DIRECTLY BY THEIR NAMES AND NEED   object_name.member_name


*/
}
