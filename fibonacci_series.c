// fibonacci series

#include <stdio.h>

int main() {
    int i,f1 =0,f2 =1,f3;
    printf("Enter an integer\n");
    scanf("%d",&i);
    
    while(i!=0)
    {
        f3 = f1 + f2;
        printf("%d\t",f1);
        f1=f2;
        f2=f3;
        i--;
    }
    
    return 0;
}
