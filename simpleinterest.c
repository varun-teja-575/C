//This is a program to find the simple interest
#include<stdio.h>
int main()
{
	int principle;
	int time;
	float rate,simple_interest;
	printf("Enter the principle amount:");
	scanf("%d",&principle);
	printf("Enter time in years:");
	scanf("%d",&time);
	printf("Enter the rate of interest:");
	scanf("%f",&rate);
	simple_interest=(principle*time*rate)/100;
	printf("the simple interest is:%.2f",simple_interest);
	
	return 0;
	
}
