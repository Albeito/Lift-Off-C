#include<stdio.h>
int fun(int);
int main()
{
    int no, square;
    printf("\n Enter a no: ");
    scanf("%d", &no);
    square= fun(no);
    printf("\n Square of no is : %d ", square);

}

int fun(int x)
{
    return x*x;
}