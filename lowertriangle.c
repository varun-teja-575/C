#include<stdio.h>
int main()
{
	int a[100][100];
	int i,j,n,m;
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf("Enter the number of columns:");
	scanf("%d",&n);
	if(m==n)
	{
		printf("Enter the %d elements:\n",m*n);
	    for(i=0;i<m;i++)
	    {
		    for(j=0;j<n;j++)
		    {
			    scanf("%d",&a[i][j]);
		    }
	    }
	    printf("\n The lower Triangular matrix elements are:\n");
	    for(i=0;i<m;i++)
	    {
		    for(j=0;j<=i;j++)
		    {
			
			    printf("%d ",a[i][j]);
		    }
		    printf("\n");
	    }
	}
	else
	{
		printf("The lower Triangular matrix elements cannot be printed\n");
		printf("Please enter a square matrix");
	}
	return 0;
	
}
