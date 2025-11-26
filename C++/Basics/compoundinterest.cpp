#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double principal,rate, CI;
    int time, amount;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate of interest: ";
    cin>>rate;
    cout<<"Enter the time period in years: ";
    cin>>time;
    CI = principal*pow((1+rate/100),time)-principal;
    cout<<"The compound interest is : "<<CI;
    return 0;
}