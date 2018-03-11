/*Program using arrays
Author:C14427818
Date:05/11/14 */

# include <stdio.h>
# define random 5
# define second 5

main()
{
    int array[random];
    int array1[second];
    int i=0;
    int counter=0;
    
    printf("Enter any %d whole numbers\n",random);
    for(i=0; i<random; i++)
    {
        counter=counter++;
        scanf("%d",&array[i]);
        array1[i]=array[i];
    }
    for(i=0; i<random; i++)
    {
        printf("numbers you entered are %d,\n",array1[i]);
    }
        printf("number of steps is %d",counter);

flushall();
getchar();
}//end main