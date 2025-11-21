#include<stdio.h>
int main(){
    int choice, id;
    
    int pan = 11111;
    int aadhar = 22222;
    int apaar = 33333;
    int driving = 44444;
    int passport = 55555;
    
    printf("KYC Verification system\n");
    printf("Enter your 1.PAN number\n");
    printf("Enter your 2.AADHAR number\n");
    printf("Enter your 3.APAAR Id\n");
    printf("Enter your 4.Driving License\n");
    printf("Enter your 5.Pass port\n");
    
    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    printf("Enter your id : ");
    scanf("%d",&id);
    
    switch(choice){
        case 1:if(id = pan){
            printf("Verified successfully");
        }
        else{
            printf("Not verified");
        }
        break;
        case 2:if(id = aadhar){
            printf("Verified successfully");
        }
        else{
            printf("Not verified");
        }
        break;
        case 3:if(id = apaar){
            printf("Verified successfully");
        }
        else{
            printf("Not verified");
        }
        break;
        case 4:if(id = driving){
            printf("Verified successfully");
        }
        else{
            printf("Not verified");
        }
        break;
        case 5:if(id = passport){
            printf("Verified successfully");
        }
        else{
            printf("Not verified");
        }
        break;
        default:
        printf("Invalid choice");
    }
}
