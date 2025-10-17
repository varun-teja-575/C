#include<stdio.h>
int main()
{
	int a[50],n,i,p,k,f=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d  elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter The element you want to search:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			f=1;
			p=i+1;
			break;
		}
	}
	if(f==1) 
	printf("The element is found at the position: %d",p);
	else
	printf("The element is not found");
	return 0;
	
}
