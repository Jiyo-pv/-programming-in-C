#include<stdio.h>
#include<conio.h>
 int main()
{
	int a,b,max;
	 
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
	max=a;
	if(b>a)
	{
		max=b;

	}
	printf("%d is max",max);
	getch();
}