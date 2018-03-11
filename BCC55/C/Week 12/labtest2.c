/*lab test 2
Author:C14427818
Date:02/12/14
*/
#include <stdio.h>
#define row 5
#define col 5

main()
{
    //initialising all rows/cols to 5
    int matrix[row][col]={{5,5,5,5,5},
                          {5,5,5,5,5},
                          {5,5,5,5,5},
                          {5,5,5,5,5},
                          {5,5,5,5,5}
                         };
    int i,j;
    //setting the selected matrices to the selected number                  
    matrix[0][0]=2;
    matrix[0][2]=1;
    matrix[0][4]=2;
    matrix[1][1]=0;
    matrix[1][2]=1;
    matrix[1][3]=0;
    matrix[2][2]=1;
    matrix[3][1]=0;
    matrix[3][2]=1;
    matrix[3][3]=0;
    matrix[4][0]=2;
    matrix[4][2]=1;
    matrix[4][4]=2;
                         //displaying the contents
                         //outer for loop deals with rows
                         for(i=0; i<row;i++)
                         {
                            //inner for loop deals with cols
                            for(j=0; j<col; j++)
                            {
                                printf("\n Row %d, Col %d, contains %d",i,j,matrix[i][j]);//printing out the matrix
                            }//end inner for
                         }//end outer for
                         printf("\n\n Most common number is 5");//showing most common number in matrix
                        flushall();
                        getchar();
}//end main
                         