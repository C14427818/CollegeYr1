#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#define STUDENT 5
#define LOCATE 30

main()
{
    int error=0;
    int i;
    char name_locater[LOCATE];
    char stuname[STUDENT][LOCATE] = { "John Smith", "Paul Walker",
    "Vin Diesel", "Cian Healy", "Derek Higgins"};

    printf("Enter surname of the student are you looking for:\n");
    
    scanf("%29s", name_locater);
    
    for (i = 0; i < STUDENT; i++) 
    {
        if (strstr(stuname[i], name_locater) != NULL)//searching for string that is the same as entered
        {
            printf("Found %s in our student records\n", stuname[i]);
            
            error=1;
            
        }//end if
       
    }//end for
    
    if(error==0)
    {
        printf("No name found try somewhere else");
    }//end if printing error message
    
    flushall();
    getchar();
}//end main