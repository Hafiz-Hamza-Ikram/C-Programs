//Determine whether number is even or odd
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    if (n%2 == 0 && n!=0){
        printf("n is even");
    } else if (n%2!= 0 && n!=0){
        printf("n is odd");
    } else {
        printf("Invalid");
    }
    return 0;
}
