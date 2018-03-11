 
#include <stdio.h>
main()
{
  int stuarray[15], num, i, j, swap;
 
  printf("Enter number of students\n");
  scanf("%d", &num);
 
  printf("Enter %d student ID's\n", num);
 
  for (i = 0; i < num; i++)
  {
    scanf("%d", &stuarray[i]);
  }
  
  for (i = 0 ; i < ( num - 1 ); i++)
  {
    for (j = 0 ; j < num - i - 1; j++)
    {
      if (stuarray[j] > stuarray[j+1]) /* For decreasing order use < */
      {
        swap = stuarray[j];
        stuarray[j] = stuarray[j+1];
        stuarray[j+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( i = 0 ; i < num ; i++ )
  {
    printf("%d\n", stuarray[i]);
  }
}