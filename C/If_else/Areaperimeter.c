#include <stdio.h>
int main()
{
    int l, b;
    printf("Enter the length of rectangle : ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &b);
    int a = l * b;       // area
    int p = 2 * (l + b); // perimeter
    if (a > p)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Area is not greater than perimeter");
    }
    return 0;
}