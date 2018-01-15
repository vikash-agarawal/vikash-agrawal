#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[10];
	int n;
	printf("enter string");
	gets(a);
	n=strlen(a);
	while(n>=0)
	{
		printf("%c",a[n]);
		n--;
	}
}
