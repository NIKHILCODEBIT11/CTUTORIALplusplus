#include<iostream>
using namespace std;
float moneyreceived(int current_money,float factor=1.04); 
//int strlen(const char *p);      // CONSTANT ARGUMENTS 
int main(){
    int money;
    cout<<"enter current money : ";
    cin>>money;
    /*in below calling function i just passed one argument to the formal parameter which is at extreme left 
    due to which the 2nd formal parameter is passed as default.*/
    cout<<"if you have current money of "<<money<<"Rs in your bank account, then you will receive "<<moneyreceived(money)<<"rs after 1 year";
    cout<<endl;
    /*in below calling function i just passed both argument to the formal parameter  
    so accordingly value is returned.
    */
    cout<<"For VIP : if you have current money of "<<money<<"Rs in your bank account, then you will receive "<<moneyreceived(money,1.1)<<"rs after 1 year";
    cout<<endl;
}
float moneyreceived(int current_money,float factor){
    return current_money*factor;
}
