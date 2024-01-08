#include <stdio.h>
void swap(int a,int b);
int main(){
    int a,b;
    printf("enter 2 values A and B:\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
void swap(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d and b = %d",a,b);
}