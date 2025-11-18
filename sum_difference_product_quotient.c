// Sum, product, difference, quotient

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    
    printf("sum of %d and %d is %d\n",a,b,a+b);
    printf("difference of %d and %d is %d\n",a,b,a-b);
    printf("product of %d and %d is %d\n",a,b,a*b);
    printf("quotient of %d and %d is %d\n",a,b,a/b);

    return 0;
}
