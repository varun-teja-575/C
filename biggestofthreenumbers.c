#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	big=(a>b)&&(a>c) ? a : (b>c) ? b : c;
	printf("The biggest number is:%d",big);
	return 0;
	
}
