#include <stdio.h>
#include <string.h>

struct list
{
    char Stulist[20];
};

main()
{
    struct list student;
    int i, j;
    struct list *ptr;
    char temp[20];
    
    ptr = &student;
  
    printf("Enter the students from DIT: \n");
  
    for(i=0; i<5; i++)//puts dit students into first 5 slots of array
    {
        scanf("%s",(&(ptr)->Stulist[i]));
    }
  
    printf("\nEnter the students from ITT: \n");
  
    for(i=5; i<10; i++)//puts itt students in next five slots
    {
        scanf("%s",(&(ptr)->Stulist[i]));
    }
  
    printf("\nEnter the students from ITB: \n");
  
    for(i=11; i<16; i++)//puts itb students in last 5 slots of array
    {
        scanf("%s",(&(ptr)->Stulist[i]));
    }
    
    

for (i = 1; i < 15; i++) 
{
    for (j = 1; j < 15; j++) 
    {
        if (strcmp ((&(ptr)->Stulist[j - 1]), (&(ptr)->Stulist[j])) > 0)
        {
            //bubble sort algorithm
            strcpy(temp, (&(ptr)->Stulist[j - 1]));
            strcpy((&(ptr)->Stulist[j - 1]), (&(ptr)->Stulist[j]));
            strcpy((&(ptr)->Stulist[j]), temp);
        }//end bubble sort if
    }//end in for
}//end out for
 
   printf("\nStudent names in order are : ");

   for (i = 0; i < 15; i++)
   {
      printf("\n%s", (&(ptr)->Stulist[i]));//printing sorted list of students
   }//end for printing sorted list
   
    flushall();
    getchar();
    
}//end main
