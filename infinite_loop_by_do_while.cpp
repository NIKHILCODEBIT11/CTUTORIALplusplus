#include<iostream>
using namespace std;
int main(){
//     $$$$$$$$$ PROOF THAT EVEN IF CONDITION IS FALSE THEN ONLY LOOP RUNS FOR ONE TIME :-


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int i=1;
//     do{
//         cout<<i<<endl;
//         i++;
//     }
//     while(false);
//     return 0;
// }

    int n;
    cout<<"enter n:";
    cin>>n;
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }
    while(true);
    return 0;
}