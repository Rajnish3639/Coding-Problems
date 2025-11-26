#include<stdio.h>
int main()
{
    int a , b;
   printf("Enter 1st no");
    scanf("%d",&a);
    printf("Enter 2nd no");
    scanf("%d",&b);
    int division=a/b;
    int remainder = a%b;
    printf("The quotient is : %d\n",division);
    printf("The remainder is : %d",remainder);
    return 0;
}