// This is a program to find the totalo and average of 5 subjects
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float avg;
	printf("Enter the marks of maths:");
	scanf("%d",&s1);
	printf("Enter the marks of physics:");
	scanf("%d",&s2);
	printf("Enter the marks of chemistry:");
	scanf("%d",&s3);
	printf("Enter the marks of english:");
	scanf("%d",&s4);
	printf("Enter the marks of cs:");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	avg=total/5.0;
	printf("The total marks are:%d",total);
	printf("\n\n The average marks are:%.2f",avg);
	return 0;
}
