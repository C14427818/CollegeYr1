/*using poointer notation with arrays*/
#include <stdio.h>
#define SIZE 3

main()
{
    float array1[SIZE]={0};
    float array2[SIZE]={0};
    int i;
    
    for(i=0; i<SIZE; i++)
    {
        scanf("%f", &*(array1 + i));
    }
    for(i=0; i<SIZE; i++)
    {
        *(array2 + i) = *(array1 + i);
    }
    for(i=0; i<SIZE; i++)
    {
        printf("%.1f",*(array2 + i));
    }
    
    getchar();
    flushall(); 
}