//  String copy

#include <stdio.h>
#include<string.h>

int main() {
    char rose[10];
    printf("Enter a character\n");
    scanf("%s",rose);
    strcpy(rose,"Jack");
    printf("String copy : %s",rose);
}
