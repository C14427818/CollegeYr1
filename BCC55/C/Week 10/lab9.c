#include <stdio.h>

main()
{
    int num;
    int *ptr;
    char letter;
    char *ptr2;
    
    letter='a';
    num=3;
    ptr=&num;
    ptr2=&letter;
    
    printf("\n num conains %d",num);
    printf("\n num is located at address %p",&num);
    printf("\n ptr points to num, therefor contains %p",ptr);
    printf("\n letter contains %c",letter);
    printf("\n letter is located at address %p",&letter);
    printf("\n ptr2 points to letter, therefor contains %p",ptr2);
    getchar();
    flushall();
    
}