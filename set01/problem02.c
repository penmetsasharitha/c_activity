//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int num1,num2,sum;

    printf("enter the frist numder:");
    scanf("%d",& num1);

    printf("enter the second numder:");
    scanf("%d",& num2);

    sum =num1+num2;
    printf("sum of %d and %d",num1,num2,sum);
    return 0;
}
