#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n>99 && n<1000){ 
        printf("3 digit number");
    }
    else{
        printf("Not a 3 digit number");
    }
    return 0;
}
