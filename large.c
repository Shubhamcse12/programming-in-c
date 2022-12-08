#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if (a > b)
    {
        printf("%d is biggest", a);
    }
    else if (b > c)
    {
        printf("%d is biggest", b);
    }
    else
        printf("%d is biggest", c);
    return 0;
}
