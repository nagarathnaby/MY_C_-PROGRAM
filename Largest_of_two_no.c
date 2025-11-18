// Largest of two numbers

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    
     if(a>b){
         printf("a is larger");
     }
         else{
             printf("b is larger");
         }

    return 0;
}
