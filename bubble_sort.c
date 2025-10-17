#include<stdio.h>
int main()
{
    
    int a[40];
    int temp;
    int i, j,n;  
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
		 { if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
     printf("\nAfter Sorting ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
