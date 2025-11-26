#include<stdio.h>
int main()
{
    int P,R,T;
    printf("Enter P");
    scanf("%d",&P);
    printf("Enter R");
    scanf("%d",&R);
    printf("Enter T");
    scanf("%d",&T);
    int SI=(P*R*T)/100;
    printf("The simple interst : %d",SI);
    return 0;
}