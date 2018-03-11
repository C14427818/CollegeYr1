 
#include <stdio.h>
#include <string.h>
 
main()
{
  int num, i, j = 0;
  char Students[15];
  char swap;
  printf("Enter number of Students\n");
  scanf("%d", &num);
 
  printf("Enter %d Student names\n", num);
 
  for (i = 0; i < num; i++)
  {
    scanf("%s", Students[i]);
  }
  
  for (i = 0 ; i < ( num - 1 ); i++)
  {
    for (j = 0 ; j < num - i - 1; j++)
    {
      if (Students[j] > Students[j+1]) /* For decreasing order use < */
      {
        swap = Students[j];
        Students[j] = Students[j+1];
        Students[j+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( i = 0 ; i < num ; i++ )
  { 
    printf("%s\n", Students[i]);
  }
}