#include<stdio.h>
#include<conio.h>
 int main()
{
	int p,r,t;
	 
	printf("enter principal:");
	scanf("%d",&p);
	printf("enter rate:");
	scanf("%d",&r);
	printf("enter time:");
	scanf("%d",&t);
	printf("simple interst=%d",(p*r*t)/100);
	getch();
}