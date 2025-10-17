#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2;
	long long int power;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	power=pow(num1,num2);
	printf("%d to the power of %d is:%d",num1,num2,power);
	return 0;
}
