// S M Mahboor Hussain | 25K-0749 | BCS-1C

#include <stdio.h>
int main(){
    int value;
    printf("Please enter a value in the range 1...7: ");
    scanf("%d",&value);
    //Converting value into corresponding day of week using Switch Case
    switch (value){
        case 1:
            printf("You entered Monday\n");
            break;
        case 2:
            printf("You entered Tuesday\n");
            break;
        case 3:
            printf("You entered Wednesday\n");
            break;
        case 4:
            printf("You entered Thursday\n");
            break;
        case 5:
            printf("You entered Friday\n");
            break;
        case 6:
            printf("You entered Saturday\n");
            break;
        case 7:
            printf("You entered Sunday\n");
            break;
        default:
            printf("You entered a value out of range\n");
    }
}