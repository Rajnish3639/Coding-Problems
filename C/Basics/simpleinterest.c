#include<stdio.h>
int main()
{
    float Principal,Rate,Time;
    printf("Enter Principal");
    scanf("%f",&Principal);
    printf("Enter Rate");
    scanf("%f",&Rate);
    printf("Enter Time");
    scanf("%f",&Time);
    printf("simple interest is : %f",Principal*Rate*Time/100);
    return 0;
}