// S M Mahboor Hussain | 25K-0749 | BCS-1C

#include <stdio.h>

int main(){
    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    int num;
    do{
        printf("Enter a number between 0 and 9 inclusive: ");
        scanf("%d",&num);
        if (num==0){
            count0 += 1;
        } else if (num==1){
            count1 += 1;
        } else if (num==2){
            count2 += 1;
        } else if (num==3){
            count3 += 1;
        } else if (num==4){
            count4 += 1;
        } else if (num==5){
            count5 += 1;
        } else if (num==6){
            count6 += 1;
        } else if (num==7){
            count7 += 1;
        } else if (num==8){
            count8 += 1;
        } else if (num==9){
            count9 += 1;
        }
    } while (num>=0 && num<=9);
    printf("Number          Number Of Occurences\n");
    printf("  0                      %d\n",count0);
    printf("  1                      %d\n",count1);
    printf("  2                      %d\n",count2);
    printf("  3                      %d\n",count3);
    printf("  4                      %d\n",count4);
    printf("  5                      %d\n",count5);
    printf("  6                      %d\n",count6);
    printf("  7                      %d\n",count7);
    printf("  8                      %d\n",count8);
    printf("  9                      %d\n",count9);
}