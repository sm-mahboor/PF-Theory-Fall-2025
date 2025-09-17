// S M Mahboor Hussain | 25K-0749 | BCS-1C

#include <stdio.h>

int main(){
    float x, y;
    printf("Coordinates are represented in the manner (x,y)\n");
    printf("Enter the x-Coordinate: ");
    scanf("%f",&x);
    printf("Enter the y-Coordinate: ");
    scanf("%f",&y);
    if ((x>0)&&(y>0)){
        printf("Point lies in Quadrant I");
    } else if ((x>0)&&(y<0)){
        printf("Point lies in Quadrant IV");
    } else if ((x<0)&&(y>0)){
        printf("Point lies in Quadrant II");
    } else if ((x<0)&&(y<0)){
        printf("Point lies in Quadrant III");
    } else{
        printf("Point lies on the Axes!");
    }
}