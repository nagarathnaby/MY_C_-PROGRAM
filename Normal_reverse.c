#include <stdio.h>

int main() {
    
    int arr[50], n=5;
    for(int i=0; i<5; i++){
        printf("Enter %d elements : ",n);
        scanf("%d",&arr[i]);
    }
    printf("Reversing array : ");
    for(int i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
