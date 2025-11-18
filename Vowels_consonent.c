// seperate vowels from consonent
#include <stdio.h>

int main() {
    char alb,a,e,i,o,u;
    printf("Enter the alphabet");
    scanf("%c%c%c%c%c%c",&alb,&a,&e,&i,&o,&u);
    
    if(alb=='a' || alb=='e' || alb=='i' || alb=='o' || alb=='u')
    printf("it is an vowel");
    else
    printf("it is an consonent");
    
    return 0;
}
