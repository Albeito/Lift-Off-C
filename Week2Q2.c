#include<stdio.h>

int main()
{
    int a[10], size, i;
    int even=0, odd=0;
    printf("\n Enter the size of Array:");
    scanf("%d", &size);

    printf("\nEnter the array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even=even + a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }

    printf("\nSum of Even numbers in Array= %d", even);
    printf("\nSum of Odd numbers in Array=%d", odd);
    return 0;
}