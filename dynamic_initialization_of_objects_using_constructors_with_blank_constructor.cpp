#include<iostream>
using namespace std;
class bank{
    int principal_rate;
    float rate_of_interest;
    int years;
    float return_value;
    public:
    bank();  // blank constructor
    bank(int,int,int);
    bank(int,int,float);
    void show();
};
int main(){
    bank o1,o2;
    int q,w,e;
    float r;
    cout<<"Enter principal value :";
    cin>>q;
    cout<<"Enter no. of years :";
    cin>>w;
    cout<<"Enter rate of interest ( in int ):";
    cin>>e;
    o1=bank(q,w,e);
    o1.show();
    cout<<"Enter principal value :";
    cin>>q;
    cout<<"Enter no. of years :";
    cin>>w;
    cout<<"Enter rate of interest ( in float ):";
    cin>>r;
    o2=bank(q,w,r);
    o2.show();
    return 0;
}
bank::bank(int q,int w,int e){
    principal_rate=q;
    years=w;
    rate_of_interest=(float)e/100;
    return_value=principal_rate;
    for(int i=0;i<w;i++){
        return_value=return_value*(1+rate_of_interest);
    }
}
bank::bank(int q,int w,float m){
    principal_rate=q;
    years=w;
    rate_of_interest=m;
    return_value=principal_rate;
    for(int i=0;i<w;i++){
        return_value=return_value*(1+rate_of_interest);
    }
}
void bank::show(){
    cout<<"The return value for principal amount "<<principal_rate<<" after "<<years
    <<" years with an interest rate of "<<rate_of_interest<<" is "<<return_value;
}
bank::bank(){}  // definition of blank constructor