#include<stdio.h>
#include<conio.h>
 int main()
{
	int i,n,sum=0;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum of first %d nos:%d",n,sum);

	getch();
}