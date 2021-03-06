#include<stdio.h>

int func(int);

void main()
{
    int no, fact;
    printf("Enter a number to calculate it's factorial\n");
    scanf("%d",&no);
    fact=func(no);
    printf("Factorial of the num(%d) = %d\n", no, fact);
}

int func(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}