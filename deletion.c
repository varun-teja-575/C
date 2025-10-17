#include<stdio.h>
int main()
{
	int a[50],n,i,p,k,f=0,t;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d the elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter The element you want to delets:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		p=i;
	}
	n=n-1;
	for(i=p;i<n;i++)
	{
		
		a[i]=a[i+1];
	
	}
	printf("\n The new array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	
