#include <stdio.h>
int main(){
    int i,j,n,a[100],ch,t;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements of array");
    for ( i=0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i=0; i< n; i++)
    {
        ch = a[i];
        for ( j = 0; j < n; j++)
        {
            if (a[j]>a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("your array is");
    for ( i=0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
