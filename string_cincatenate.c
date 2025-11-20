//  string cincatanate
#include <stdio.h>
#include<string.h>
int main() {
    char rose[10];
    printf("Enter a string\n");
    scanf("%s",&rose);
    printf("before : %s\n",rose);
    strcat(rose,"jack");
    printf("After : %s\n",rose);
}
