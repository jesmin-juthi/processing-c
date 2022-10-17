#include<stdio.h>

int main()

{
    int a, b;

    printf("Enter two numbers \n");

    printf("Enter first number: ");

    scanf("%d", &a);

    printf("Enter second number: ");

    scanf("%d", &b);

    int sum, diff, mul, div, rem;

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;

    printf("The sum of %d and %d is %d \n", a, b, sum);
    printf("The difference of %d and %d is %d", a, b, diff);
    printf("\nThe multiplication of %d and %d is %d \n", a, b, mul);
    printf("The division of %d and %d is %d \n", a, b, div);
    printf("The remainder of %d and %d is %d", a, b, rem);

    // output e space dile 2 bar input deya jay

    return 0;
}
