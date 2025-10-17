#include<stdio.h>
int main()
{
	int a,b,c,d;
	float val;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printf("Enter c value:");
    scanf("%d",&c);
    printf("Enter d value:");
    scanf("%d",&d);
    val=a/b*c+a*d/b;
    printf("The value is :%.2f",val);
    return 0;
}
