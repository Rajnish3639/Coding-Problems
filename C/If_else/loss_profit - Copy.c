#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    if(sp<cp){
        printf("Loss");
    }
    else{
        printf("No profit no loss");
    }
    return 0;

}