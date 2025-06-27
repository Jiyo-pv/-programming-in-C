#include<stdio.h>
#include<conio.h>
 int main()
{       int n,flag=0,i=2;
	 
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		if(n==0 || n==2) break;
		if(n%i==0)
		{
			flag=1;
			break;
		}

	}while(i<=n/2);
	if(flag)
		printf("composite number");
	else
		printf("prime number");
	getch();
}