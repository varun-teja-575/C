#include<stdio.h>
int main()
{
	int a[100][100],b[100][100];
	int c[100][100],i,j,n1,m1,n2,m2;
	printf("Enter the rows of matrix A:");
	scanf("%d",&m1);
	printf("Enter the columns of matrix A:");
	scanf("%d",&n1);
	printf("Enter the rows of matrix B:");
	scanf("%d",&m2);
	printf("Enter the columns of matrix B:");
	scanf("%d",&n2);
	if(m1==m2 && n1==n2)
	{
	    printf("Enter the %d elements of matrix A:\n",m1*n1);
	    for(i=0;i<m1;i++)
	    {
		    for(j=0;j<n1;j++)
		    {
			    scanf("%d",&a[i][j]);
	    	}
	    }
	    printf("\n Enter The %d elements of matrix B:\n",m1*n1);
	    for(i=0;i<m1;i++)
	    {
		    for(j=0;j<n1;j++)
		    {
			    scanf("%d",&b[i][j]);
	    	}
	    }
	    for(i=0;i<m1;i++)
	    {
		    for(j=0;j<n1;j++)
		    {
			    c[i][j]=a[i][j]+b[i][j];
	    	}
	    }
	    printf("The resultant matrix is:\n");
	    for(i=0;i<m1;i++)
	    {
		    for(j=0;j<n1;j++)
		    {
			    printf("%3d",c[i][j]);
	    	}
	    	printf("\n");
	    }
    }
    else
    printf("Matrix Addition is not possible");
	return 0;
}
