#include<stdio.h>
#include<conio.h>
 int main()
{
	int i,n,sum=0,input;
	 
	printf("enter n:");
	scanf("%d",&n);
	printf("enter nos\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&input);
		sum+=input;
	}
	printf("sum of numbers entered:%d",sum);

	getch();
}