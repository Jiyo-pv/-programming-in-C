#include<stdio.h>
#include<conio.h>
 int main()
{       int a,b,min,max,diff=0;
	 
	printf("enter numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		min=b;
		max=a;

	}
	else
	{
		min=a;
		max=b;
	}
	while(min<max)
	{
		diff++;min++;

	}
	printf("difference is %d",diff);
	getch();
}