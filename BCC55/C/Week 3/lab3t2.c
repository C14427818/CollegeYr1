//getting averages
//C14427818
//30/9/14

#include <stdio.h>

main()
{
    float answer=1.0-2.0;
    float i=1.0-2.0;
    for(i=1.0;i<=2.0;i+=0.1)
    {
        answer=answer + i;
    }
    printf("the sum is %f",answer);
    getchar();
}//end main