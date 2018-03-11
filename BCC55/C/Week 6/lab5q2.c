/*lab 5 question 2
Author:C14427818
Date:21/10/14*/

#include <stdio.h>
main()
{
   
    int value;
    int counter;
    value=1;
    counter=0;
   
    
        printf("Enter a positive whole number\n");
        scanf("%d",&value);
        printf("Initial value is %d\n",value);
   
    while(value>1)
    {
        counter=counter++;
        if(value%2==0)
        {
            value=value/2;
        }//end if
        else
        {
            value=value*3+1;
        }//end else
        if(value!=1)
        {
            printf("\n Next number is %d",value);
        }
        else
        {
            printf("\n The final value is %d",value);
            printf("\n The number of steps is %d",counter);
        }//end else
            
        
    }//end while
    flushall();
    getchar();
}//end main
