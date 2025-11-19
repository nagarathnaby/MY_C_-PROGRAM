//Divisible by 3 and 5

#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    if(a%3==0){
        printf("a is divisible by 3\n");
    }
    if(a%5==0){
        printf("a is divisible by 5\n");
    }
    
    return(0);
}
