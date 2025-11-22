#include <stdio.h>

void swap(float *x1, float *x2){
    float temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}
int main() {
    float bal1, bal2;
    
    printf("Enter the balance amount 1 : \n");
    scanf("%f",&bal1);
    
    printf("Enter the balance amount 2 : \n");
    scanf("%f",&bal2);
    
    printf("Before swap %.2f\n %.2f\n",bal1, bal2);
    
    swap(&bal1, &bal2);
    
    printf("Before swap %.2f\n %.2f",bal1, bal2);
    

    return 0;
}
