//This is a program to find the compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float principle,time,rate,num,compound_interest;
	printf("Enter the principle amount:");
	scanf("%f",&principle);
	printf("Enter the time in years:");
	scanf("%f",&time);
	printf("Enter the number of times interest is compunded:");
	scanf("%f",&num);
	printf("Enter the rate of interest:");
	scanf("%f",&rate);
	compound_interest=(1+(rate/(num*100)));
	compound_interest=pow(compound_interest,num*time);
	compound_interest=principle*compound_interest;
	printf("The compound interest is:%.2f",compound_interest);
	return 0;
}
