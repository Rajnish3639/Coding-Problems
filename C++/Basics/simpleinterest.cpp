#include<iostream>
using namespace std;
int main(){
    int principal,rate,time,SI;
    cout<<"Enter the principal amount : "<<endl;
    cin>>principal;
    cout<<"Enter the rate of interest : "<<endl;
    cin>>rate;
    cout<<"Enter the time period in years : "<<endl;
    cin>>time;
    SI = (principal*rate*time)/100;
    cout<<"The simple interest is : " <<SI; 
}