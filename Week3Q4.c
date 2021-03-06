#include<stdio.h>

int numb(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d= %d",n, numb(n));
    return 0;
}
int numb(int n)
{
    if(n>=1)
        return n*numb(n-1);
    else
        return 1;
}