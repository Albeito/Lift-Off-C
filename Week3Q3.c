#include<stdio.h>
void func(int, int);

void main()
{
    int no1, no2;

    printf("Enter two numbers\n");
    scanf("%d %d", &no1, &no2);
    func(no1, no2);
}

void func(int x, int y)
{
    int gcd, lcm, remainder, numrt, denomt;
    if(x>y)
    {
        numrt=x;
        denomt=y;
    }
    else
    {
        numrt=y;
        denomt=x;
    }
    remainder= numrt%denomt;

    while(remainder!=0)
    {
        numrt=denomt;
        denomt=remainder;
        remainder=numrt%denomt;
    }
    gcd=denomt;
    lcm=x*y/gcd;

    printf("GCD of %d and %d = %d\n",x,y,gcd);
    printf("LCM of %d and %d = %d\n",x,y,lcm);
}