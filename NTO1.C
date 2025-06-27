#include<stdio.h>
#include<conio.h>
 int main()
{       int i,n;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d\t",i);
	printf("\n");
	for(i=n;i>0;i--)
		printf("%d\t",i);
	getch();
}