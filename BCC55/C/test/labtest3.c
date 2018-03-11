/*lab test 3
Author:C14427818
Date:18/2/15
*/

#include <stdio.h>
#define SIZE 3

//prototypes
void change_to_euro(int);
void change_to_dollar(int);


float values [SIZE];
main()
{
    int i;
    int choice=0;
   
    
    printf("Enter your currency\n");
    printf("1. Is Euro\n");
    printf("2. Is Dollar\n"); 
    scanf("%d",&choice);
    
    //call function 
    change_to_euro(choice);

    //call function 2
    change_to_dollar(choice);
    flushall();
    getchar();
}//end main

//implement change to euro
void change_to_euro(choice)
{
    
    float val1=0;
    float val2=0;
    float val3=0;
    int i;
    
    
    if(choice==1)
    {
        printf("\nPlease enter the 3 amounts you wish to convert\n");
    
        for(i=0; i<SIZE; i++)
        {
            scanf("%f",&values[i]);
            val1=values[0]*(0.87);
            val2=values[1]*(0.87);
            val3=values[2]*(0.87);
        } 
        printf("Your 3 numbers in Euro are\n");
        printf("1.%f\n",val1);
        printf("2.%f\n",val2);
        printf("3.%f\n",val3);
    }//end for euro
    else
    {
        return;
    }//end else euro
}//end change to euro

//implement change to dollar
void change_to_dollar(choice)
{
    
    float val1=0;
    float val2=0;
    float val3=0;
    int i;
    
    
    if(choice==2)
    {
        printf("\nPlease enter the 3 amounts you wish to convert\n");
    
        for(i=0; i<SIZE; i++)
        {
            scanf("%f",&values[i]);
            val1=values[0]*(1.15);
            val2=values[1]*(1.15);
            val3=values[2]*(1.15);
        } 
        printf("Your 3 numbers in Euro are\n");
        printf("1.%f\n",val1);
        printf("2.%f\n",val2);
        printf("3.%f\n",val3);
    }//end if dollar
    else
    {
        return;
    }//end else dollar
}//end change to dollar
        
