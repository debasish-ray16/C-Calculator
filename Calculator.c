#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int num1,num2;
    int operat;
    
    float sum;
    float diff;
    float prodt;
    float divio;
    float rem;
    float sqrt1,sqrt2;
    
    double power;
    
    
    printf("[1]-Addition.\n[2]-Subtraction\n[3]-Multiplication.\n[4]-Division.\n[5]-Remainder\n[6]-SquareRoot.\n[7]-Exponent\n\n");
    printf("-----------------------------------------------------------\n");
    printf("Enter the operator:");
    scanf("%d",&operat);
    
    
    
    if (operat == 1){
        printf("Enter the two numbers:\t");
        scanf("%d%d",&num1,&num2);
        // Sum
        sum=num1+num2;
        printf("===================================");
        printf("The sum is %.2f",sum);
    }
    
    
    else if (operat == 2){
        printf("Enter the two numbers:\t");
        scanf("%d%d",&num1,&num2);
        // Difference
        diff=num1-num2;
        printf("===================================");
        printf("The difference is %.2f",diff);
    }
    
    
    else if (operat == 3){
        printf("Enter the two numbers:\t");
        scanf("%d%d",&num1,&num2);
        prodt=num1*num2;
        printf("===================================");
        printf("The product is %.2f",prodt);
    }

    
    else if (operat == 4){
        printf("Enter the two numbers:\t");
        scanf("%d%d",&num1,&num2);
        // Quotient
        divio=num1/num2;
        printf("===================================");
        printf("The quotient is %.2f",divio);
    }
    
    
    else if (operat == 5){
        printf("Enter the two numbers:\t");
        scanf("%d%d",&num1,&num2);
        // Remainder
        rem=num1%num2;
        printf("===================================");
        printf("The remaiinder is %f",rem);
    }
    
    
    else if (operat == 6){
        scanf("%d%d",&num1,&num2);
        printf("Enter the two numbers:\t");
        /// Square Root from library
        sqrt1=sqrt(num1);
        sqrt2=sqrt(num2);
        printf("===================================");
        printf("The square root of: %f%f",sqrt1,sqrt2);
    }
    
    
    else if (operat == 7){
        printf("Enter the two numbers:\t");
        scanf("%d%d",&num1,&num2);
        // Power of function
        power=pow(num1,num2);
        printf("===================================");
        printf("The power is %.2lf",power);
    }
    
    
    else {
        printf("You have entered wrong entry. Sorry for the inconvenience caused.\n");
        printf("Please enter the valid integer.")
    }
    
    
    return 0;
}
