/*Programming test Correction
Author:C14427818
Date:3/11/14*/

#include <stdio.h>
main()
{
    int num1,num2;
    int temp=0;
    int i;
    int termnum=0;
    
    printf("Enter the term you want to see\n");
    scanf("%d",&termnum);
    
    num1=1; num2=0;
    printf("0, ");
    
    for(i=0; i<termnum; i++)
    {
        temp= num1+num2;
        num1=num2;
        num2=temp;
        
        printf("%d, ",temp);
    }//end for
    flushall();
    getchar();
}//end main