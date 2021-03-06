#include<stdio.h>

int main()
{
    int a[20],i,n,large,small;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nInput the elements in the Array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    large=small=a[0];
    for(i=0;i<n;++i)
    {
        if(a[i]>large)
        large=a[i];
        if(a[i]<small)
        small=a[i];
    }
    printf("\nThe smallest element in array is %d :",small);
    printf("\nThe largest element in the array is %d :",large);

    return 0;
} 