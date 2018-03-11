/*Doing the exercises at the end of chapter 4
Author:C14427818
Date:08/10/14 */

#include <stdio.h>

main()

{
    float age;
    float beats;
    
    printf("enter your age\n");
    scanf("%f",&age);
    //calculating heartbeats
    beats=38880000*age;
    printf("\nyour heart has beaten %.2f times in your life",beats);
    flushall();
    getchar();
}//end main
    