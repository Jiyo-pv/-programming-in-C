#include<stdio.h>
#include<conio.h>
 int main()
{
	int flag,a,b;
	 
	printf("enter  no\n");
	scanf("%d",&a);
	if(a==0)
		printf("zero");
	else if(a>0)
		printf("positive");
	else
		printf("negative");
	getch();
}