#include <stdio.h>
#include <math.h>
void sine(int n);
int fact(int n1);
int main(){
    int num;
    printf("enter no. of terms:");
    scanf("%d",&num);
    sine(num);
    return 0;
}
int fact(int n1)
{
    int i,f=1;
    for(i=1;i<=n1;i++){
        f=f*i;
    }
    return f;
}

void sine(int n){
    float sum = 0,x,q;
    int i,j;
    printf("enter angle in degrees");
    scanf("%f",&x);
    q = x;
    x = (x * 3.14)/180;
    for ( i = 1,j=1;i <= n;i++,j=j+2)
    {
        if (i%2!=0)
        sum = sum +pow(x,j)/fact(j);
        else
        sum = sum -pow(x,j)/fact(j);
    }
    printf("sum of sin(%f) = %f",q,sum);
    printf("\n library sum of sin = %f",sin(x));
    return 0;
}
