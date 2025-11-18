// Nested if else

#include <stdio.h>

int main() {
    int age;
    scanf("%d",&age);
    printf("Enter your age");
    if(age>=18){
        if(age<=30)
        printf("You are young adult");
        else
        printf("you are adult");
    }
    return 0;
}
