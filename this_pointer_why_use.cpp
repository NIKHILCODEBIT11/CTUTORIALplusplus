#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void set_data(int a){     // ***** Here i am using the paramter of same name as that of class member pvt variable even i made object 
        a=a;                   // of same name.
    }
    void get_data(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    A a;
    a.set_data(4);
    a.get_data();
    return 0;
}

/*
WHY I AM GETTING GARBAGE VALUE ???????

----> Previously whenever i was using set_data() at that time i used to give the name of pvt member variable a diff name and the parameter
a diff name.
BUT IF I WANT THAN I CAN EVEN GIVE THE SAME NAME TO BOTH THE PVT MEMBER VARIABLE AS WELL AS THE PARAMETER, which i am doing now.

***** BUT FOR DOING THIS I WILL HAVE TO USE THE KEYWORD      "this"     *********.  { which itself is a POINTER }


####### Actually  "this" has 2 uses mostly followed in diff files.

*/