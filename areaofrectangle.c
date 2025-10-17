//This is a program to find the area of a rectangle
#include<stdio.h>
int main()
{
	float length,breadth,area;
	printf("Enter the length of the rectangle in cm:");
	scanf("%f",&length);
	printf("Enter the breadth of the rectangle in cm:");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("\nThe area of the rectangle is:%.2f cm square units",area);
	return 0;
	
}
