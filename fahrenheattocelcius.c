//Program to convert fahrenheit to celcius
#include<stdio.h>
int main()
{
	float fh,cel;
	printf("Enter value in Fahrenheit:");
	scanf("%f",&fh);
	cel=(fh-32.0)*(5.0/9.0);
	printf("the value of %.2f Fahrenheit in celcius is:%.2f",fh,cel);
	return 0;
}
