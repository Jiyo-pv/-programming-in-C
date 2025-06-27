#include<stdio.h>
#include<conio.h>
 int main()
{
	int max,a,b,c;
	 
	printf("enter 3 nos\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>a)
	{
		if(b>c)
			max=b;
		else if(c>a)
			max=c;
	}
	else if(c>a)
		max=c;
	printf("%d is max",max);
	getch();
}