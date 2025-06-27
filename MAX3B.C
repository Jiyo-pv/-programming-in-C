#include<stdio.h>
#include<conio.h>
 int main()
{
	int max,a,b,c;
	 
	printf("enter 3 nos\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&& a>=c)
	{
		max=a;
	}
	else if(b>=a && b>=c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	printf("%d is max",max);
	getch();
}