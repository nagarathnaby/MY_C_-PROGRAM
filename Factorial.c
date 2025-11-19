// Factorial

#include <stdio.h>
int fact(int a){
    if(a==0){
    return 1;
}
    return a*fact(a-1);
    }
int main() {
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Factorial : %d",fact(n));
}
