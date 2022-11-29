#include <stdio.h>
int main()
{
    long  i = 1, n, factorial = 1;
    printf("enter the value of n =");
    scanf("%ld", &n);
    do
    {
        factorial = factorial * i;
        i++;

    } while (i <= n);
    printf("the factorial of %ld=%ld\n", n, factorial);

    return 0;
}