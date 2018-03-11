/*Lab3 Q4
Author:c14427818
Date:7/10/14*/

#include <stdio.h>

main()
{
    float num1,num2,num3;
    
    num1=num2=num3=0;
    
    printf("Enter 3 numbers with decimal parts\n");
    //getting user to enter numbers
    printf("The first number is ");
    scanf("%f", &num1);
    printf("\nThe second number is ");
    scanf("%f", &num2);
    printf("\nThe third number is ");
    scanf("%f",&num3);
    printf("\n the first number is %.4f\n the second number is %.3f\n the third number is %.0f",num1,num2,num3);
    flushall();
    getchar();
}//end main
    
