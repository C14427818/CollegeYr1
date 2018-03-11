/*Program using while loop
Author:C14427818
Date:21/10/14*/

#include <stdio.h>

main()
{
    int des;//declarin variables
    des=10;//initialising variables
    
    while (des!=0)
    {
        printf("%d,",des);
        des=des-1;
    }
    flushall();
    getchar();
}