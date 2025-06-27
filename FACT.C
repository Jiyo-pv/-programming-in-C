#include<stdio.h>
#include<conio.h>
 int main()
{       int i,n,fact=1;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fact*=i;
	printf("%d is factorial",fact);
	getch();
}