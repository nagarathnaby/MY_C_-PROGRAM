//A robot needs to find how far it must travel between two points on a 2D plane.
//Develop a C program to calculate the straight-line distance between the given coordinates.

#include<stdio.h>
#include<math.h>
int main(){
    float x1, x2, y1, y2, dist;
    
    printf("Enter the value of x1 and x2\n");
    scanf("%f%f",&x1,&x2);
    
    printf("Enter the value of y1 and y2\n");
    scanf("%f%f",&y1,&y2);
    
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    printf("distance = %f",dist);
}
