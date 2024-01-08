#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10][10],b[10][10],r,c,i,j,sum[10][10];
    printf("enter number of rows and colums\n");
    scanf("%d%d",&r,&c);
    printf("enter values for array a\n");
    for ( i=0; i<r; i++)
    {
        for (j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter values for array b\n");
    for (i=0;i,i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("your answer is\n");
    for (i=0;i,i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("sum is\n");
    for (i=0;i,i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
