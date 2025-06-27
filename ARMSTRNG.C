#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
{       int n,digits=0,temp,rem,sum=0;
	 
	printf("enter n:");
	scanf("%d",&n);
	temp=n;
	do
	{
		digits++;
		temp/=10;
	}while(temp);
	temp=n;
	if(temp)
	{
		do
		{
			rem=temp%10;
			sum+=pow(rem,digits);
			temp/=10;

		}while(temp);
	}

	if(sum==n)
		printf("Armstrong number");
	else
		printf("not armstrong number");
	getch();
}