#include<stdio.h>
int main()
{
	int in ,i;
	scanf("%d",&in);

	printf("I hate ");
	for(i=2 ; i<=in ; i++)
	{
		if(i%2==0)
		printf("that I love ");
		else
		printf("that I hate ");

	}

	printf("it\n");

	return 0;
}
