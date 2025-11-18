#include<stdio.h>
int simple_intrest()
{
    int p, t, r, si;
    printf("Enter the principle amount");
    scanf("%d",&p);
    printf("Enter the time taken");
    scanf("%d",&t);
    printf("Enter the rate of intrest");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("simple intrest is %d",si);
    return (si);
}
int main(){
    simple_intrest();
}
