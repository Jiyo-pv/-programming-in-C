#include<stdio.h>
#include<conio.h>
 int main()
{       int temp,num,rem,rev=0;
	 
	printf("enter number:");
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(temp==rev)
		printf("palindrome");
	else
		printf("not a palindrome");
	getch();
}