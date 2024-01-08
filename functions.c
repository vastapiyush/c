#include<stdio.h>
int max(int num1,int num2);
int main(){
    int a,b,ret;
    printf("enter number a,b");
    scanf("%d%d",&a,&b);
    ret = max(a,b);
    printf("max number is:%d\n",ret);

}
int max(int num1,int num2){
    int result;
    if (num1>num2)
    result = num1;
    else
    result = num2;

    return result;
}