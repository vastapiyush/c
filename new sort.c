#include <stdio.h>
void even(int a[100],int n);
int main(){
    int a[100],i,n,gret,smol;
    printf("enter the number of elements of array:");
    scanf("%d",&n);
    printf("enter elements of array");
    for (i = 0; i < n; i++)
    {
            scanf("%d",&a[i]);
    }
    even(a,n);
    return 0;
}
void even(int a[100],int n){
    int gret=n-1,smol=0,i,temp,j;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j]>a[smol])
        {
            temp=a[j];
            a[j]=a[smol];
            a[smol]=temp;
        }
        }
        smol++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}