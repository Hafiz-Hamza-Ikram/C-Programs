//Sum of even numbers from 0 to 100
#include <stdio.h>
int main() {
    int i=0;
    int sum=0;
    for (i; i<=100; i+=2) {
        sum= sum +i;
        }
    printf("%d", sum);
    return 0;
    }
