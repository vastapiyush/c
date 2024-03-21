#include<stdio.h>
#include<string.h>
void details(int i);
struct bank
{
    char name[20];
    int account_no,balance;
} cust[100];

int main(){
    int n,i,changes;
    printf("enter number of account to add:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        details(i);
    }
    printf("press corresponding number for changes\n(1)balance\n(2)name\n");
    scanf("%d",&changes);
    switch (changes)
    {
    case 1:
        printf("enter your account number:");
        scanf("%d",&i);
        printf("previous account balance is:%d",cust->balance);
        printf("enter new balance:");
        scanf("%d",&cust->balance);
        printf("--------------------------\n");
            printf("account name:%s\n",cust->name);
    printf("account balance:%d\n",cust->balance);
    printf("your account number is :%d\n",cust->account_no);
    printf("--------------------------\n");
        break;
    case 2:
    printf("enter your account number:");
    scanf("%d",&i);
    printf("previous name is:%s\n",cust->name);
    printf("enter new name:");
    scanf("%s",&cust->name);
    printf("--------------------------\n");
    printf("account name:%s\n",cust->name);
    printf("account balance:%d\n",cust->balance);
    printf("your account number is :%d\n",cust->account_no);
    printf("--------------------------\n");
    default:
        break;
    }
    return 0;
}

void details(int i){
    printf("enter account name:");
    scanf("%s",cust->name);
    cust->account_no=i+1;
    printf("enter account balance:");
    scanf("%d",&cust->balance);
    printf("your account number is :%d\n",cust->account_no);
    printf("--------------------------\n");
}

