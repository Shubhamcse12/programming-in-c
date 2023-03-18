#include<stdio.h>
int main()
{
    float r, a;
    printf("Enter the value of radius =");
    scanf("%f", &r);
    a = 3.14*r*r;
    printf("Area of circle is %0.1f", a);
    return 0;

}