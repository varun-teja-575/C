// This is a program to find the area of a square
#include<stdio.h>
int main()
{
	float side,area;
	printf("Enter the side of the square in cm:");
	scanf("%f",&side);
	area=side*side;
	printf("The area of the square is:%.2f cm square units",area);
	return 0;
}
