#include<iostream>
using namespace std;
typedef union money{
    int exchange_money_in_weight_of_rice;
    char exchange_money_in_respect_of_car;
    float exchange_money_in_respect_of_pounds; 
}mo;
int main(){
    mo m1;
    m1.exchange_money_in_weight_of_rice=8;
    m1.exchange_money_in_respect_of_car='c';  // error because at once only a single variable can be accessde
    cout<<m1.exchange_money_in_weight_of_rice<<endl;
    cout<<m1.exchange_money_in_respect_of_car<<endl;
    return 0;

}