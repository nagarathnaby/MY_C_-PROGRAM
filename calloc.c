#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *dog = (int*)calloc(5,sizeof(int));
    for(int i=0; i<5; i++){
        printf("Enter elements : ");
        scanf("%d",&dog[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d\n",dog[i]);
    }
}
