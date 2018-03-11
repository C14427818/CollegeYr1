#include <stdio.h>
#include <string.h>

int main()
{
	char str1[21];
	char str2[21];
	
	
	printf("Enter 2 strings\n");
	scanf("%s",str1);
	scanf("%s",str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("Same");
	}
	else
	{
		printf("Different");
	}
	
return 0;
}
