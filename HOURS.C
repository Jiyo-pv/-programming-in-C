#include<stdio.h>
#include<conio.h>
 int main()
{
	int minutes;
	 
	printf("enter minutes:");
	scanf("%d",&minutes);
	printf("%d hours %d minutes",minutes/60,minutes%60);
	getch();
}