// String length

#include <stdio.h>
#include<string.h>

int main() {
    char a[10];
    printf("Enter a character\n");
    scanf("%s",a);
    int length = strlen(a);
    printf("String length %d",length);
}
