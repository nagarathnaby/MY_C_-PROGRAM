#include<stdio.h>
int add( int a, int b)
{
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d",a,b,a+b);
    
}
int main(){
    add(5,8);
}
