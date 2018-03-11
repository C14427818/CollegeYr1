/*program that uses while loop*/

#include <stdio.h>
main()
{
    int num,total;
    total=0;
    num=1;
  
        do
        {
            printf("\nEnter a number");
            scanf("%d",&num);
            total=total+num;
        }//end do
        while (num!=0);
        {
        printf("\n The total of numbers entered is %d",total);
        }//end while
    
}//end main