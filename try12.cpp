#include<iostream>
using namespace std;
class shop{
    private:
    int n;
    int itemid[100];
    int itemprice[100];
    int number;
    public:
    void init(){number=1;};
    void set_price(int);
    void get_price(int);
};
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    shop s;
    s.init();
    s.set_price(n);
    s.get_price(n);
    return 0;
}
void shop :: set_price(int n){
    for(int i=0;i<n;i++){
        cout<<"Enter item id of item no. "<<number<<" : ";
        cin>>itemid[number-1];
        cout<<number<<endl;
        cout<<"Enter price of item no. "<<number<<" : ";
        cin>>itemprice[number-1];
        cout<<number<<endl;
        number+=1;
        cout<<"Updated value of number here is "<<number<<endl;
    }
}
void shop::get_price(int n){
    for(int i=0;i<n;i++){
        cout<<"The price of item with item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}