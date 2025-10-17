#include<stdio.h>
int main()
{
	int i,num[40],n,s=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		s=s+num[i];
	}
	printf("The sum of the elements of the array is: %d",s);
	return 0;
}

