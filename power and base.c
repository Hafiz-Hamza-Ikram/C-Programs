#include <stdio.h>

int main()
{
    int a, b, c;
    int r = 1;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    for(c = 1; c <= b; c++)
    {
        r *= a;
    }
    printf("Result is = %d", r);
    return 0;
}
