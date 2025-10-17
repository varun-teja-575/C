#include<stdio.h>
int main()
{
	int num,count=0,n=1;
	printf("Enter the number:");
	scanf("%d",&num);
	while (n<=num)
	{
		if (num%n==0)
		{
			count=count+1;
		}
		n=n+1;
	}
	if (count==2)
	{
		printf("The entered number is a prime number\n");
		
	}
	else 
	{
		printf("The entered number is not a prime number\n");
	}
	return 0;
}

