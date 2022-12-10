#include<stdio.h>
int main(){
    char name[5];
    for (char i = 1; i <= 5; i++)
    {
        printf("enter roll %d name =\n",i);
        scanf("%s",&name);
    }
    
    return 0;
}