/*program using functions*/

#include <stdio.h>
#define SIZE 10// size of array

void stars (void);
main()
{
    stars();
}//end main
int i;
void stars(void)
{

    for(i=0; i<SIZE; i++)
    {
        printf("*");//printing 10 stars using function
    }
    flushall();
    getchar();
}//end function   
    
    