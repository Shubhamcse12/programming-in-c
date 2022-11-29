#include<stdio.h>
int main(){
    int i=0,f=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    do
    {
        f=f+i;
        i++;
    } while (n>i);
    printf("%d",f);
    return 0;
    
}