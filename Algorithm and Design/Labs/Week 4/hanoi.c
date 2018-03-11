/*Program for completing the towers of hanoi
Author:C14427818
Date:11/2/15*/

#include <stdio.h>

void hanoi(int, char, char, char);

main()
{
    int disk=0;
    
    printf("Enter the number of disks : ");
    scanf("%d", &disk);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    
    hanoi(disk, 'A', 'C', 'B');
    
    flushall();
    getchar();
    return 0;
}//end main

void hanoi(int disk, char tower1, char tower3, char tower2)//copying details into function
{
    if(disk==1)
    {
        printf("\nMove disk 1 from Tower %c to Tower %c",tower1,tower3);
        return;
    }//end if
    else
    {
        hanoi(disk-1, tower1, tower2, tower3);
        printf("\nMove disc %d from Tower %c to Tower %c",disk,tower1,tower3);
        hanoi(disk-1, tower2, tower3, tower1);
    }//end else
}//end function
        

