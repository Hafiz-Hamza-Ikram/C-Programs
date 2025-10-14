//Determine whether number is primeor composite
#include<stdio.h>
int main()
{
    int i, n;
    int c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        c++;
    }

    if(c==2)
    {
        printf("PRIME");
    }
    return 0;
}
