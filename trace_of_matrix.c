#include<stdio.h>
int main()
{
	int a[50][50];
	int i,j,n,m,s=0;
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
			    if(j==i)
			    s=s+a[i][i];
		    }
	    }
	    printf("\nThe trace of the matrix is: %d",s);
	}
	else
	{
		printf("cannot find the trace of the matrix");
	    printf("\nPlease enter a square matrix");
    } 
	return 0;
}
