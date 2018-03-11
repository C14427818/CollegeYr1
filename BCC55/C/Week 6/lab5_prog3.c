/*Program for Q3 in lab 
Author:C14427818
Date:22/10/14*/

#include <stdio.h>

main()
{
    int num;
    num=0;
    int i;
    i=0;
    printf("Enter a whole number between 1 and 5\n");
    scanf("%d",&num);
    if(num>=1 && num<=5)
    {   
    
        for(int i=1; i<21; i++)
        {
            if(i%num==0)
            {
            printf("Number  divides %d\n",i);
       
            }//end if 
            
        }//end for
    }
    else
    {
        printf("Error you dipshit, Now get up te fuck you");
    }
flushall();
getchar();    
}//end main 
