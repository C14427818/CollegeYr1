/*Program using arrays
Author:C14427818
Date:05/11/14 */

# include <stdio.h>
# define fahre 3
# define cel 3

main()
{
    float array[fahre];
    float array1[cel];
    int i=0;
    int counterf=0;
    int counterc=0;
    
    printf("Enter %d temperatures\n",fahre);
    for(i=0; i<fahre; i++)
    {
        counterf=counterf++;
        
        scanf("%f",&array[i]);
        array1[i]=(array[i]-32.0)*(5.0/9.0);
    }
    for(i=0; i<fahre; i++)
    {
        counterc=counterc++;
        
        printf("temp in celcius is %.2f\n",array1[i]);
    }
    

        printf("number of steps for fahrenheit %d\n",counterf);
        printf("number of steps for celcius is %d",counterc);

flushall();
getchar();
}//end main