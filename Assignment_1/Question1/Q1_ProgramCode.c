#include <stdio.h>
#include <string.h>

int main(){
    const int dailyLimit = 5000;
    const char country1[] = "Pakistan";
    const char country2[] = "UAE";
    int numberOfTransactions, previousTotal, transactionAmount, newTotal;
    char country[50];
    printf("Enter the number of transactions made in last hour: ");
    scanf("%d",&numberOfTransactions);
    if (numberOfTransactions >= 3){
        printf("Transaction Flagged! (Reason: oo many transactions in a short period)\n");
    } else{
        printf("Enter the country of transaction: ");
        scanf("%s",country);
        if ((strcmp(country,country1)!=0)&&(strcmp(country,country2)!=0)){
            printf("Transaction Flagged! (Reason: Unusual country)\n");
        } else{
            printf("Enter the total of previous transactions for today: ");
            scanf("%d",&previousTotal);
            printf("Enter the amount for this transaction: ");
            scanf("%d",&transactionAmount);
            newTotal = previousTotal + transactionAmount;
            if (newTotal > dailyLimit){
                printf("Transaction Flagged! (Reason: Daily limit exceeded)\n");
            } else{
                printf("Transaction Completed!");
            }
        }
    }
}