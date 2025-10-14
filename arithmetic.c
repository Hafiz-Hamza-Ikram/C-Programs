//Arithmetic Operations on two variables
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf("Enter 1st number a="); //User Input
    scanf("%d",&a);
    printf("Enter 2nd number b="); //User Input
    scanf("%d",&b);
    int sum = a+b;
    printf("a+b= %d\n",a+b);       //Addition
    int difference= a-b;
    printf("a-b= %d\n",a-b);       //Subtraction
    int multiplication= a*b;
    printf("a*b= %d\n",a*b);       //Multiplication
    int division= a/b;
    printf("a/b= %d\n",a/b);       //Division
    int modulus= a%b;
    printf("a%%b= %d\n",a%b);      //Modulus
    return 0;
}
