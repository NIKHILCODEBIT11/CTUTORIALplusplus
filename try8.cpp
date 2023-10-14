#include<iostream>
using namespace std;
class shop{
    private:
    int itemid[100];
    int itemprice[100];
    int counter;  // i will initialise it to 0 and will track no. of items added.
    public:
    void initcounter(){counter=0;};    // as written inside {} counter =0 , so counter is initializing from 0.
    void setprice(int i);
    void displayprice(int i);
};
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    shop dukaan;
    //dukaan.initcounter();      // to initialize counter from value assigned in member declaration in class by default.
    dukaan.setprice(n);
    dukaan.displayprice(n);
    return 0;
}
void shop::setprice(int i){
    for(int k=0;k<i;k++){
    cout<<"Enter id of your item no. "<<counter+1<<":";
    cin>>itemid[counter];
    cout<<"Enter price of your item: ";
    cin>>itemprice[counter];
    counter=counter+1;
    }
}
void shop::displayprice(int m){
    for(int i=0;i<m;i++){
        cout<<"The price of item with itemid "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
