#include<stdio.h>
int main()
{
	int i,a[40],n,j,t;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d  elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The reversed array is:\n");
	for (i=0;i<n/2;i++)
	{
	     j=n-i-1;
	     t=a[i];
	     a[i]=a[j];
	     a[j]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}

