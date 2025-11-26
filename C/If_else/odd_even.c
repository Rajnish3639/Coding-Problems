#include <stdio.h>
int main()
{
    int n; // box ban gya
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    { // even condition
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}
