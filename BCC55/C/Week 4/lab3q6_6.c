/*Doing the exercises at the end of chapter 4
Author:C14427818
Date:08/10/14 */

#include <stdio.h>

main()

{
    float fahrenheit1;
    float celsius2;
    celsius2=fahrenheit1=0;
    
    printf("enter the temperature in fahrenheit\n");
    
    scanf("%f",&fahrenheit1);
    celsius2=(fahrenheit1-32.00)*(5.00/9.00);
    printf("the temperature in celsius is %.2f",celsius2);
    
    flushall();
    getchar();
}
    
    