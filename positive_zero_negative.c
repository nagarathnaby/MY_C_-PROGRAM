// positive, negative or zero

#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    
     if(a>0){
         printf("a is positive number");
     }
         else if(a==0){
             printf("a is equal to zero");
         }
         else{
             printf("a is negative number");
         }

    return 0;
}
