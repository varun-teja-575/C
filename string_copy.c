#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100]=;
	int i;
	puts("Enter the string:");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	puts("The copied string is:");
	puts(str2);
	return 0;
}
