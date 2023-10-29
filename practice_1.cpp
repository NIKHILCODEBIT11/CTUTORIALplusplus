#include<iostream>
#include<cmath>
using namespace std;
class simple_calculator{
    protected:
    float num_1,num_2,sum,product,difference,division;
    public:
    // input 4 numbers for operation.
    void set_data(float a,float b){
        num_1=a;
        num_2=b;
        sum=num_1+num_2;
        product=num_1*num_2;
        division=num_1/num_2;
        if(num_1>num_2){
            difference=num_1-num_2;
        }
        else{
            difference=num_2-num_1;
        }
    }
    void display(){
        cout<<"Sum is "<<sum<<endl;
        cout<<"The difference is "<<difference<<endl;
        cout<<"The product is "<<product<<endl;
        cout<<"The division is "<<division<<endl;
    }
};
class scientific_calculator{
    protected:
    float num_1,num_2,square_1,square_2;
    float square_root_num_1,square_root_num_2,sin_num_1,sin_num_2;
    float cos_num_1,cos_num_2,tan_num_1,tan_num_2;
    // REFRE ONCE FOR COT SEC COSEC
    public:
    void set_info(float a,float b){
        num_1=a;
        num_2=b;
        square_1=num_1*num_1;
        square_2=num_2*num_2;
        square_root_num_1=sqrt(num_1);
        square_root_num_2=sqrt(num_2);
        /*
        GETTING SUCH VALUES OF TRIGONOMETRIC
         FUNCTIONS BECAUSE I AM HOPING OF GETTING VALUES
         FOR " DEGREES " BUT I AM GETTING FOR
         " RADIANS "
         */
        sin_num_1=sin(num_1);
        sin_num_2=sin(num_2);
        cos_num_1=cos(num_1);
        cos_num_2=cos(num_2);
        tan_num_1=tan(num_1);
        tan_num_2=tan(num_2);
    }
    void display_2(void){
        cout<<"The square of "<<num_1<<" is "<<square_1<<endl;
        cout<<"The square of "<<num_2<<" is "<<square_2<<endl;
        cout<<"The square root of "<<num_1<<" is "<<square_root_num_1<<endl;
        cout<<"The square root of "<<num_2<<" is "<<square_root_num_2<<endl;
        cout<<"The sin of "<<num_1<<" is "<<sin_num_1<<endl;
        cout<<"The sin of "<<num_2<<" is "<<sin_num_2<<endl;
        cout<<"The cos of "<<num_1<<" is "<<cos_num_1<<endl;
        cout<<"The cos of "<<num_2<<" is "<<cos_num_2<<endl;
        cout<<"The tan of "<<num_1<<" is "<<tan_num_1<<endl;
        cout<<"The tan of "<<num_2<<" is "<<tan_num_2<<endl;
    }
};
class hybrid:public simple_calculator,public scientific_calculator{
    public:
     void show();
     void setting_value(float a,float b){
        set_data(a,b);
        set_info(a,b);
     }
};
void hybrid::show(){
    // cout<<num_1<<endl;
    display();
    display_2();
}
int main(){
    float a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    hybrid calculations;
    // calculations.set_data(a,b);
    // calculations.display();
    // calculations.set_info(a,b);
    // calculations.display_2();
    calculations.setting_value(a,b);
    calculations.show();
    return 0;
}
    