#include<iostream>
using namespace std;
int main(){
    int l, b, a, p;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the breadth : ";
    cin>>b;
    a = l*b;
    cout<<"The area of rectangle is : "<<a<<endl;
    p = 2*(l+b);
    cout<<"The perimeter of rectangle is : "<<p<<endl;
    if(a>p){
        cout<<"Area of rectangle is greater than its perimeter";
    }
    else{
        cout<<"Perimeter of rectangle is greater than its area";
    }
}



    