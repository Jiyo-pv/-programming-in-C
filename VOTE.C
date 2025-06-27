#include<stdio.h>
#include<conio.h>
 int main()
{
	int age;
	 
	printf("enter age :");
	scanf("%d",&age);
	if(age<18)
		printf("you canot vote");
	else
		printf("you can vote");


	getch();
}