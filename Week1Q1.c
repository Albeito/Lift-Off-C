#include<stdio.h>

int main()
{
    int x, y;
    int sum, sub, mul;
    float div;
    printf("Enter any two numbers: ");
    scanf("%d%d", &x, &y);
    sum= x + y;
    sub= x - y;
    mul= x*y;
    div= (float)x/y;
    printf("SUM= %d\n", sum);
    printf("Difference=%d\n", sub);
    printf("Product= %d\n", mul);
    printf("Quotient= %f\n", div);
    return 0;
}