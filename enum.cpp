#include<iostream>
using namespace std;
typedef union money{
    int exchange_money_in_weight_of_rice;
    char exchange_money_in_respect_of_car;
    float exchange_money_in_respect_of_pounds; 
}mo;
int main(){
    enum meal{breakfast,lunch,dinner};
    /*
    breakfast =0
    lunch = 1
    dinner = 2
    */
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    meal m2=lunch;
    meal m3=dinner;
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<(m2==0)<<endl;  // it will print 0 for false
    cout<<(m3==2)<<endl;  // it will print 1 for true

    mo m1;
    m1.exchange_money_in_weight_of_rice=8;
    m1.exchange_money_in_respect_of_car='c';
    cout<<m1.exchange_money_in_weight_of_rice<<endl;
    cout<<m1.exchange_money_in_respect_of_car<<endl;
    return 0;

}