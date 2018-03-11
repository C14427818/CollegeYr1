/*Program for Q5 in lab 
Author:C14427818
Date:22/10/14*/

#include <stdio.h>

main()
{
    
    for(int i=0; i<101; i++)
    {
        if(i%2==0)
        {
            printf("%d,",i);
        }//end if
    }//end for
    flushall();
    getchar();
}//end main