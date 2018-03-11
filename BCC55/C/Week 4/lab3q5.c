/*Lab 3 Q5
Author:c14427818
Date:07/10/14*/

#include <stdio.h>

main()
{
    char c,r;
  
    printf("Enter 2 characters\n");
    //getting user to enter 2 characters
    printf("The first character is ");
    scanf("\n%1s",&c);
    printf("The second character is ");
    scanf("\n%1s",&r);
    printf("first character entered was %c and \nsecond character entered was %c",c,r);
    flushall();
    getchar();
    
}//end main