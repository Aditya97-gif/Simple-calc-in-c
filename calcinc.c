#include <stdio.h>
void cal();
void cal(){
    int i = 1;

    while(i){
        int a ,b;
        printf("enter the first one:\n");
        scanf("%d",&a);
        printf("enter the second one:\n");
        scanf("%d",&b);
        printf("FOR ADDITION GIVE 1 AND FOR SUBTRACTION GIVE 2 AND FOR MULTIPLICATION GIVE 3 FOR DIVISION 4 FOR TERMINATION PRINT 9:\n");
        int choice;
        scanf("%d",&choice);
        if(choice == 1){
            printf("The sum is %d\n", a + b);
        } 
        else if(choice == 2){
            printf("The difference is %d\n", a - b);
        } 
        else if(choice == 3){
            printf("The product is %d\n", a * b);
        } 
        else if(choice == 4){
            if(b != 0) {
                printf("The quotient is %.2f\n", (float)a / b);
            } 
            else {
                printf("Division by zero is not allowed.\n");
            }
        }
        else if(choice == 9) {
            printf("Terminating the program.\n");
            i = 0; // Exit the loop
        } 
        else {
            printf("Invalid choice.\n");
        }
    }
}

int main(){
    cal();
    return 0;
}