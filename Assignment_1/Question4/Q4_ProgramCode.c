#include <stdio.h>

int main(){
    int card1, card2, card3, card4, card5;
    int rank1, rank2, rank1Count=0, rank2Count=0;

    printf("Enter the ranks of your Poker Hand one by one\n");
    printf("Rank of Card 1: ");
    scanf("%d",&card1);
    printf("Rank of Card 2: ");
    scanf("%d",&card2);
    printf("Rank of Card 3: ");
    scanf("%d",&card3);
    printf("Rank of Card 4: ");
    scanf("%d",&card4);
    printf("Rank of Card 5: ");
    scanf("%d",&card5);

    rank1 = card1;
    rank1Count += 1;
    if (card2 == rank1){
        rank1Count += 1;
    }else{
        rank2 = card2;
        rank2Count += 1;
    }
    if (card3 == rank1){
        rank1Count += 1;
    } else{
        if (rank2Count == 0){
            rank2 = card3;
            rank2Count += 1;
        } else if (card3 == rank2){
            rank2Count += 1;
        }
    }
    if (card4 == rank1){
        rank1Count += 1;
    } else{
        if (rank2Count == 0){
            rank2 = card4;
            rank2Count += 1;
        } else if (card4 == rank2){
            rank2Count += 1;
        }
    }
    if (card5 == rank1){
        rank1Count += 1;
    } else{
        if (rank2Count == 0){
            rank2 = card5;
            rank2Count += 1;
        } else if (card5 == rank2){
            rank2Count += 1;
        }
    }
    if ((rank1Count == 3 && rank2Count == 2) || (rank1Count == 2 && rank2Count == 3)){
        printf("This hand is a Poker Full House!");
    } else{
        printf("This hand is not a Poker Full House!");
    }
}