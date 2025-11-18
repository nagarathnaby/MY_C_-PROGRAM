// Given number is in the range of 10 to 100
#include <stdio.h>

int main() {
    int num;
    printf("enter a number");
    scanf("%d",&num);
    
    if(num <= 10){
    if(num >= 100)
    printf("the number is in the range of 10 to 100 ");
    else
    printf("number is not in the given range");
    }
    return 0;
}
