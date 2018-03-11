#include <stdio.h>
#include <stdlib.h>

main()
{
    float *ptr;
    int temps;
    int size;
    int i;
    int sum=0;
    float average;
    
    
    printf("How many temperature readings?");
    scanf("%d",&temps);
    
    //allocate memory
    
    ptr=(float*)calloc(sizeof(float),temps);
    
    //check if memory was allocated
    
    if(ptr=NULL)
    {
        printf("Failed");
    }
    
    //enter temps
    
    for(i=0; i<temps; i++)
    {
        scanf("%f", ptr + i);//or & *(ptr + i)
        sum = sum + *(ptr + i);
    }
    
    average = (float)sum/temps;
    
    for(i=0; i<temps; i++)
    {
        printf("%f", *(ptr + i));
    }
    
    printf("\n\nThe average temperature is %.1f",average);
    
}//end main
    