#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j = n; j > n-i+1; j--)
        {
            printf("%d ",j);
        }
        for (int j = 0; j < n-i+1; j++)
        {
            printf("%d ",n-i+1);
        }
        for (int j = n; j < 2*n-i; j++)
        {
            printf("%d ",n-i+1);
        }
        for (int j = i; j > 1; j--)
        {
            printf("%d ",n-j+2);
        }  
        printf("\n");
    } 
    for(int i=n-1;i>=1;i--){
        for (int j = n; j > n-i+1; j--)
        {
            printf("%d ",j);
        }
        for (int j = 0; j < n-i+1; j++)
        {
            printf("%d ",n-i+1);
        }
        for (int j = n; j < 2*n-i; j++)
        {
            printf("%d ",n-i+1);
        }
        for (int j = i; j > 1; j--)
        {
            printf("%d ",n-j+2);
        }  
        printf("\n");
    }
    
    return 0;
}