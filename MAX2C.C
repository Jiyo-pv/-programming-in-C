#include<stdio.h>
#include<conio.h>
 int main()
{
	int max,a,b,diff;
	 
	printf("enter 2 nos\n");
	scanf("%d%d",&a,&b);
	diff=a-b;
	max=a;
	if(diff<0)
	{
		max=b;
	}
	printf("%d is max",max);
	getch();
}