// add of matrix

#include<stdio.h>
int main()
{
int row,col;
printf("Enter the number of row and column");
scanf("%d%d",&row,&col);

int a[row][col], b[row][col], c[row][col];
    printf("Enter the elements of matrix A:");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the elements of matrix B:");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Resultant value is\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\n",c[i][j]);
        }
    }
}   
    
