//Develop a C program that takes a student's marks as input and displays their grade based on the following
//criteria:
//90 and above: Grade A
//75 to 89: Grade B
//60 to 74: Grade C
//50 to 59: Grade D
//Below 50: Grade F
//Choose a suitable control structure to implement this logic efficiently.


#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    
    if(marks>=90){
        printf("Grade A");
    }
    else if(marks>=75){
        printf("Grade B");
    }
    else if(marks>=60){
        printf("Grade C");
    }
    else if(marks>=50){
        printf("Grade D");
    }
    else if(marks<50){
        printf("Grade E");
    }
    
}
