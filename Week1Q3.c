#include<stdio.h>

int main()
{
    float radius, dia, circ, area;
    printf("Enter radius of Circle:");
    scanf("%f", &radius);
    dia=2*radius;
    circ=2*3.14*radius;
    area=3.14*(radius*radius);
    printf("Diameter of circle= %f units \n", dia);
    printf("Circumference of Circle= %f units \n", circ);
    printf("Area of Circle= %f sq. units",area);
    return 0;
}