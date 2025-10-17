//This is a program to convert celcius to fahrenheit
#include<stdio.h>
int main()
{
	float fh,cel;
	printf("Enter value in celcius:");
	scanf("%f",&cel);
	fh=((9.0/5.0)*cel)+32.0;
	printf("the value of %.2f celcius in Fahrenheit is:%.2f",cel,fh);
	return 0;
}
