#include<stdio.h>
#include<string.h>
 
main()
{
   char student[5][20], temp[20];
   int i, j, num;

 
    printf("\nEnter the number of students: ");
    scanf("%d",&num);
    
    printf("\nEnter the student names: \n");
    
   for (i = 0; i < num; i++)
   {
      scanf("%s", student[i]);
   }
   
for (i = 1; i < num; i++) 
{
    for (j = 1; j < num; j++) 
    {
        if (strcmp(student[j - 1], student[j]) > 0)
        {
            //bubble sort algorithm
            strcpy(temp, student[j - 1]);
            strcpy(student[j - 1], student[j]);
            strcpy(student[j], temp);
        }//end bubble sort if
    }//end in for
}//end out for
 
   printf("\nStudent names in order are : ");

   for (i = 0; i < num; i++)
   {
      printf("\n%s", student[i]);//printing sorted list of students
   }//end for printing sorted list
   
    flushall();
    getchar();
}