//playing around with what was learned in class
//Author:C14427818
//Date:24/9/14

#include <stdio.h>

main()
{
    int var1,var2,var3,var4;
    
    var1=var2=((5+10)+5)*20/40;
    var3=var1++;
    var4=++var2;
    
    printf("var1 contains %d and var2 contains %d\n",var1,var2);
    printf("var3 contains %d and var4 contains %d",var3,var4);
}//end main