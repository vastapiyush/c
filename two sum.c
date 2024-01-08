#include<stdio.h>
int main(){
    int a[100],i,j,target,n;
    printf("enter number of terms\n");
    scanf("%d",&n);
    printf("enter target\n");
    scanf("%d",&target);
    printf("enter elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("all possible outcomes are:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[i]+a[j]==target)
            {
                printf("{%d,%d}",i,j);
            }
            
        }
        
    }
    return 0;
}