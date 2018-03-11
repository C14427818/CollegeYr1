/*Program that uses calloc
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    float *ptr;
    int no_els,i;
    
    printf("how many elements?\n");
    scanf("%d",&no_els);
    //allocating memory
    ptr=(float*) calloc (no_els, sizeof(float));
    //check if memory was allocated
    if(ptr==NULL)
    {
        printf("failed to allocate memory");
    }//end if
    else
    {//entering data into the memory block
        for(i=0; i<no_els; i++)
        {
            scanf("%f",&*(ptr+i));
        }//end for
    
        //once finished free the memory
        free(ptr);
    }//end else
    flushall();
    getchar();
}//end main
        
    