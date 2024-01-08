#include<stdio.h>
int main(){
    int a[10][10],i,j,r,c;
    printf("enter row and column");
    scanf("%d%d",&r,&c);
    printf("enter elements of array a");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    
}