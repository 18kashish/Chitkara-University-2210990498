#include<stdio.h>
#include<math.h>
int main()
{
	int num,copy,n=0,rem,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	copy=num;
	while(copy!=0)
	{
		copy=copy/10;
		n++;
	}
	copy=num;
	while(copy!=0)
	{
		rem=copy%10;
		sum=sum+pow(rem,n);
		copy=copy/10;
	}
	if(sum==num)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
