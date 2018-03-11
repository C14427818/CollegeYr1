/*Program using pass by value*/
#include <stdio.h>
//Prototype
void fxn(int);

main()
{
	int param_1=1;
	
	printf("Param_1 is %d",param_1);
	//Call fxn()
	fxn(param_1);
	printf("\nParam_1 is %d",param_1);
    
    flushall();
    getchar();
}//End main()
/*Implement fxn()*/
void fxn(int p1)
{
	printf("\np1 is %d",p1);
	p1++;
}//End fxn()
