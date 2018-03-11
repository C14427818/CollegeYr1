/*program that uses while loop*/

#include <stdio.h>
main()
{
    float num,total;
    total=0;
    num=1;
    
    while (num!=0)
    {
        printf("\nEnter a number");
        scanf("%f",&num);//variable must be changing inside loop
        total=total+num;
    }//end while
    printf("\n The total of numbers entered is %.1f",total);
}//end main