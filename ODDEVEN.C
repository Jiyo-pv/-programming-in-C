#include<stdio.h>
#include<conio.h>
 int main()
{
	int flag,a,b;
	 
	printf("enter  no\n");
	scanf("%d",&a);
	flag=a%2;
	printf("%d is %s",a,(flag)?"odd":"even");
	getch();
}