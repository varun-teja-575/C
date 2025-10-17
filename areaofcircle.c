//This is a program to find the area of a circle
#include<stdio.h>
int main()
{
	float radius,area;
	printf("Enter the radius of the circle in cm:");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("The area if the circle is:%.2f cm square units",area);
	return 0;
}
