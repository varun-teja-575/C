#include<stdio.h>
int main()
{
	int i,num[40],n,max,max_pos,max2,min,min_pos;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	max=num[0];
	min=num[0];
	for (i=0;i<n;i++)
	{
		if(num[i]>=max)
		{
		    max=num[i];
		    max_pos=i+1;
        }
        if(num[i]<=min)
        {
        	min=num[i];
        	min_pos=i+1;
		}
	}
	max2=num[0];
	for (i=0;i<n;i++)
	{
		if(i!=max_pos)
		{
		    if(num[i]>=max2)
		    {
			    max2=num[i];
			}
        }
	}
	printf("The biggest element of the array is: %d\n",max);
	printf("The smallest element is: %d",min);
	return 0;
}
