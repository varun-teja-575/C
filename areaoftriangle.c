//this is a program to find the area of a triangle
#include<stdio.h>
int main()
{
	float base,height,area;
	printf("Enter the base of the triangle in cm:");
	scanf("%f",&base);
	printf("Enter the height of the triangle in cm:");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("\nThe area of the triangle is :%.2f cm square units",area);
	return 0;
}
