/*Doing the exercises at the end of chapter 4
Author:C14427818
Date:08/10/14 */

#include <stdio.h>

main()

{
    //declaring variables
    float num1,num2,num3,num4;
    num1=num2=num3=num4=0;
    
    printf("enter any four numbers and I will display them in reverse\n");
    scanf("%f %f %f %f",&num1,&num2,&num3,&num4);
    printf("the numbers in reverse are %.3f,%.3f,%.3f,%.3f",num4,num3,num2,num1);
    flushall();
    getchar();
}//end main()
    
    