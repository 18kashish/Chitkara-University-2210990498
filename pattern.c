#include<stdio.h>
int main()
	\\ pattern question
	\\star pattern
{
	int i,j,k=1;
	printf("pattern is");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	    printf("\n");
	}
	for(i=9;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");	
	}
}
