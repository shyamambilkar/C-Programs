#include<stdio.h>

int main()
{
	int n,t,a,b=0;
	printf("Enter any number:\n");
	scanf("%d",&n);
	
	t=n;
	while(n>0)
	{
		a=n%10;
		b=b+a*a*a;
		n=n/10;
	}	
	if(b==t)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}
	return 0;
}

