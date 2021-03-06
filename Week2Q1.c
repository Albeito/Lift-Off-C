#include<stdio.h>

int main()
{
    int num, sum=0, x;
    printf("Enter a number:\n ");

    for(scanf("%d", &num); num!=0; num=num/10)
    {
        x=num%10;
        sum=sum+x;
    }
    printf("Sum of digits of number = %d\n", sum);
    return 0;
}