//  Print gap

#include <stdio.h>

int main() {
    char a[10];
    printf("Enter your name :");
    fgets(a,sizeof(10),stdin);
    printf("Name : %s\n",a);
}
