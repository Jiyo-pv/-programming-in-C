#include<stdio.h>
#include<conio.h>
 int main()
{
	int a,b;
	 
	printf("enter 2 nos\n");
	scanf("%d%d",&a,&b);
	printf("%d is max",(a>b)?a:b);
	getch();
}