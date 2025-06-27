#include<stdio.h>
#include<conio.h>
 int main()
{       int num,rem,rev=0;
	 
	printf("enter number:");
	scanf("%d",&num);
	while(num)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	printf("reverse is %d",rev);
	getch();
}