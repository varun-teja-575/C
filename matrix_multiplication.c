#include<stdio.h>
int main()
{
	int a[100][100],b[100][100];
	int c[100][100],i,j,m,n,p,q,k;
	printf("Enter the rows of matrix A:");
	scanf("%d",&m);
	printf("Enter the columns of matrix A:");
	scanf("%d",&n);
	printf("Enter the rows of matrix B:");
	scanf("%d",&p);
	printf("Enter the columns of matrix B:");
	scanf("%d",&q);
	if(n==p)
	{   
	    printf("Enter the %d elements of matrix A:\n",m*n);
	    for(i=0;i<m;i++)
	    {
		    for(j=0;j<n;j++)
		    {
			    scanf("%d",&a[i][j]);
	    	}
	    }
	    printf("\n Enter The %d elements of matrix B:\n",p*q);
	    for(i=0;i<p;i++)
	    {
		    for(j=0;j<q;j++)
		    {
			    scanf("%d",&b[i][j]);
	    	}
	    }
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("The resultant matrix is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%3d",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("Matrix multiplication cannot be possible");
	return 0;
}
