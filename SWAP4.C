#include<stdio.h>
#include<conio.h>
 int main()
{
	int a,b,temp;
	 
	printf("enter 2 nos\n");
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	a=a+b-(b=a);
	printf("after  swap\na=%d b=%d",a,b);
	getch();
}