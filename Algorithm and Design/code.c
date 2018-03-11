/* this program will do a tree
    Jonatans A de Souza
    03/02/2015

    */

#include <stdio.h>

int main()
{

        int i,j,b, tree;

        printf("Key in the size of the three you want? "); /// Ask for tree size
        scanf("%d",&tree);

    i = tree;
    b = i;
    j=i;

        for(i=tree;i>0;i--)
        {
            for(b=i; b>1; b--)
            {
                printf(" ");
            }
            for(j=tree;j>i-1;j--)
            {
                printf("*");
            }
            for(j=tree;j>i-1;j--)
            {
                if(j==i)
                {

                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");

        }


    i = tree;

        for(b=i; b>1; b--)
        {
            printf(" ");
        }

        printf("*\n");





}