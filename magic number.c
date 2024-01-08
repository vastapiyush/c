#include <stdio.h>
void magic(int num);
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    magic(num);
    return 0;
}
void magic(int num){
    int numf;int sum=0;int rem;int rev=0;int num2;int tot;
numf = num;
while(num!=0){
rem = num%10;
sum = sum + rem;
num = num/10;
}
num2 = sum;
while (num2 != 0) {
    rem = num2 % 10;
    rev = rev * 10 + rem;
    num2 =num2/10;
  }
  tot = rev * sum;
  if(tot == numf)
  printf("%d is a magic number",numf);
  else
  printf("%d is not a magic number",numf);
}