#include<iostream>
using namespace std;
class shopitems{
    int id; 
    float price;
    public:
    void set_data(int,float);
    void get_data();
};
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    shopitems *ptr = new shopitems[n];
    int g;
    float h;
    shopitems *ptrr = ptr;    //     BUT WHY ??????? Answered below at end.
    for(int i=0;i<n;i++){
        cout<<"Enter id and price for shopitem no. "<<i+1<<" ";
        cin>>g>>h;

         // *(shopitems).set_data(g,h);  ---->   MAJOR MISTAKE ::: ---> Here i am instead of using pointer name i am using class name that's why
        // shopitems->set_data(g,h);             showing error,   PAY ATTENTION.

        (*ptr).set_data(g,h);
        // ptr->set_data(g,h);
        ptr++;

        /*
        *(ptr+i).set_data(g,h);    It is showing error.   REASON :::---> The reason is that unlike ptr which stores address which on 
                                   adding with "i" is pointing to the next index item of shopitems array, *(ptr) is having the value 
                                   not address due to which if i do any variation of *(ptr+1) or *(ptr)+i , it will show error as i am trying
                                   to add an integer to the object which is of a new data type "shopitems" which can't be dona as int 
                                   can be added only with int.

        (ptr+i)->set_data(g,h);    It is working as here even though i am using arrow operator but still i am adding an int to the address
                                   which will make the ptr jump to the next index of array type "shopitems".
        */
    }
    for(int i=0;i<n;i++){
        (*ptrr).get_data();
        // cout<<"OR"<<endl;
        // ptr->get_data();
        ptrr++;
    }
}
void shopitems::set_data(int a,float b){
    id=a;
    price=b;
}
void shopitems :: get_data(){
    cout<<"The id is "<<id<<endl;
    cout<<"The price is "<<price<<endl;
}

/*

ANSWER :-

Since in the first for loop i am inserting the data items g,h to call the function set_data to set values for each element of the object 
array. Due to which as i am doing  ptr++ which means (ptr=ptr+1) so when the loop ends then ptr will be pointing to the element of array 
which is not available as i am doing ptr++ after running set_data(), so at last time when for loop will run then after running set_data()
for last item of the array of type "shopitems" when it will be ptr++, then it will store garbage value in ptr.

So, at second for loop when i am doing get_data() using "ptr" then i won't be getting value as ptr will keep on moving further printing 
garbage value. That's why i use "ptrr" which will point to "ptr" at start so that even though after first for loop "ptr" will be at out 
of index, but by using "ptrr" i can again start from the 0th index just like i did for ptr in first for loop.

######### EXAMPLE :-

                                            1           2           3           4
                                            ^           ^           ^           ^
                                            |           |           |           |
                                            |           |           |           |
                   
While starting of 1st for loop             ptr
                                           ptrr 

while end of 1st for loop                                                               ptr
                                           ptrr

while starting of 2nd for loop                                                          ptr
                                           ptrr

while end of 2nd for loop                                                               ptr
                                                                                        ptrr

                   
*/