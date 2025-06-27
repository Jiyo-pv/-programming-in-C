#include<stdio.h>
#include<conio.h>
 int main()
{
	int a,b;
	 
	printf("enter angles\n");
	scanf("%d %d",&a,&b);
	printf("%d is 3rd angle",180-(a+b));
	getch();
}