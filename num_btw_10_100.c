// Given number is in the range of 10 to 100

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 100) {
        printf("%d is between 10 and 100.\n", num);
    } else {
        printf("%d is NOT between 10 and 100.\n", num);
    }

    return 0;
}

