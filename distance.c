// Program to find the distance travelled by an object
#include<stdio.h>
int main()
{
	int speed,time;
	float distance;
	printf("Enter the speed in km/h:");
	scanf("%d",&speed);
	printf("Enter the time in minutes:");
	scanf("%d",&time);
	distance=(speed*time)/60.0;
	printf("\n\n The distance travelled is %.2f km",distance);
	return 0;
	
}
