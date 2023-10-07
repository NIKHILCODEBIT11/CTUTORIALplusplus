#include<iostream>
using namespace std;
class shop{
    private:
    int itemid[100];
    int itemprice[100];
    int cui;  // i will initialise it to 0 and will track no. of items added.
    public:
    void initcui(){cui =0;};
    void setprice(int i);
    void displayprice(int i);
};
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    shop dukaan;
    dukaan.initcui();
    dukaan.setprice(n);
    dukaan.displayprice(n);
    return 0;
}
void shop::setprice(int i){
    for(int k=0;k<i;k++){
    cout<<"Enter id of your item no. "<<cui+1<<":";
    cin>>itemid[cui];
    cout<<"Enter price of your item: ";
    cin>>itemprice[cui];
    cui=cui+1;
    }
}
void shop::displayprice(int m){
    for(int i=0;i<m;i++){
        cout<<"The price of item with itemid "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}