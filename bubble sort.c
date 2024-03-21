#include<stdio.h>
int main(){
    int i,j,k,a[100],n,temp;
    printf("enter number of elements to be entered");
    scanf("%d",&n);
    printf("enter elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (k = 1; k < n; k++)
    {
        for (j = 0; j < n-k; j++)
    {
        if (a[j]>a[j+1])
        {
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        
    }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}