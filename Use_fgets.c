#include <stdio.h>

void main() {
    char ch[40];
    printf("Enter the character :\n");
    fgets(ch, sizeof(ch), stdin);
    printf("The character entered is %s \n",ch);

}
