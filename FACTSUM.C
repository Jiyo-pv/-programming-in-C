#include<stdio.h>
#include<conio.h>
 int main()
{       int i,n,fact=1,sum=0;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
		sum+=fact;
	}
	printf("%d is sum",sum);
	getch();
}