#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%3==0 && n%5==0 && n%15!=0){
        cout<<"It is divisible by 3 and 5 but not by 15";
    }
    else{
        cout<<"It is not divisible by 3 , 5 and 15.";
    }

}