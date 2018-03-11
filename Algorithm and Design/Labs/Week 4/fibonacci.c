/*Programming to display the fibonacci numbers
Author:C14427818
Date:10/2/15*/

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
    
    for(i=0; i<termnum; i++)
    {
        temp= num1+num2;//adding next number to the last number
        num1=num2;//putting last number from sequence overwriting original
        num2=temp;//putting the final number from term number chosen by user into temp
        
    }//end for
     printf("%d, ",temp);//only printing the term that the user wants to see
    flushall();
    getchar();
}//end main