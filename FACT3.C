#include<stdio.h>
#include<conio.h>
 int main()
{       int n,fact=1,sum=0,i;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
		sum+=i/fact;
	}

	printf("%d is sum",sum);
	getch();
}