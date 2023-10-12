#include<iostream>
using namespace std;
typedef class shop{
    private:
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void set_price(void);
    void display_price();
    void init_the_counter() {counter=1;}
}s;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    s k;
    k.init_the_counter();
    for(int i=0;i<n;i++){
    k.set_price();
    k.display_price();
    }
    return 0;
}
void s::set_price(){
    cout<<"Enter id of your item no. "<<counter<<" :";
    cin>>itemid[counter];
    cout<<"Enter price of your item :";
    cin>>itemprice[counter];
    counter++;
}
void s::display_price(){
    for(int i=0;i<counter-1;i++){
        cout<<"The price of item "<<i+1<<" with item id "<<itemid[i+1]<<" is "<<itemprice[i+1]<<endl;
    }
}