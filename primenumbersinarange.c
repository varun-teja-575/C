#include<stdio.h>
int main()
{
	int num,range,count=0,n=1,n2;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("The prime numbers in the given range are:\n");
	while (n<=range)
	{
		count=0;
		n2=1;
		while (n2<=n)
		{
			if (n%n2==0)
			{
				count=count+1;
			}
			n2=n2+1;
		}
		if (count==2)
		{
			printf("%d, ",n);
		}
		n=n+1;
	}
	return 0;
}

