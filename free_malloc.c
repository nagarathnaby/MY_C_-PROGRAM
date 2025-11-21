#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter the num");
    scanf("%d",&n);
    
    int *arr = (int*)malloc(5*sizeof(int));
    
    for(int i=0; i<n; i++){
        printf("Enter %d ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array element :\n");
        for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
        }   
        free(arr);
        
     printf("Array element :\n");
        for(int i=0; i<n; i++){
        printf("%d",arr[i]);   
        }
    return 0;
}
