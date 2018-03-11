/*Doing the exercises at the end of chapter 4
Author:C14427818
Date:08/10/14 */

#include <stdio.h>

main()

{
    //declaring variables
    char c;
    int i;
    float f;
    double d;
    
    printf("Enter a character\n");
    scanf("%1s",&c);//enter character
    printf("Enter a whole number\n");
    scanf("%d",&i);//enter whole number
    printf("Enter any number\n");
    scanf("%f",&f);//enter any number
    printf("Enter any number again\n");
    scanf("%lf",&d);//enter any number
    
    flushall();
    getchar();
}