#include <stdio.h>
#include <string.h>

void main()
{
    int  m, n, i, j = 0;
    char array1[50], array2[50], array3[100], k;
 
    printf("\n Enter size of array Array 1: ");
    scanf("%d", &m);
    printf("\n Enter sorted elements of array 1: \n");
    for (i = 0; i < m; i++)
    {
        scanf("%s", array1[i]);
    }
    printf("\n Enter size of array 2: ");
    scanf("%d", &n);
    printf("\n Enter sorted elements of array 2: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", array2[i]);
    }
    i = 0;
    j = 0;
    while (i < m && j < n)
    {
        if (strcmp(array1[i], array2[j]) < 0)
        {
            strcpy(array3[k], array1[i]);
            i++;
        }
        else
        {
            strcpy(array3[k], array2[j]);
            j++;
        }
        k++;
    }
    if (i >= m)
    {
        while (j < n)
        {
            strcpy(array3[k], array2[j]);
            j++;
            k++;
        }
    }
    if (j >= n)
    {
        while (i < m)
        {
            strcpy(array3[k], array1[i]);
            i++;
            k++;
        }
    }
    printf("\n After merging: \n");
    for (i = 0; i < m + n; i++)
    {
        printf("\n%s", array3[i]);
    }
}