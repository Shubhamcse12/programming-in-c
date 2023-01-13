#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    if (n<0)
    {
        printf("number %d is negative",n);
    }
    else
    {
        printf("number %d is positive",n);
    }
    return 0;
    
}