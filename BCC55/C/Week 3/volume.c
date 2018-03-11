//volume of box
//C14427818
//30/9/14

#include <stdio.h>

main()
{
    float h=10,l=11.5,w=2.5;
    float v = h*l*w;
    float sa= 2*l*w+2*w*h+2*l*h;
    
    printf("the sum is %f\n",v);
    printf("the sum is %f",sa);
}//end main