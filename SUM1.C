#include<stdio.h>
#include<conio.h>
 int main()
{       int i=1,n,temp,sum=0;
	 
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		temp=sum;
		temp+=i;
		sum+=temp;
		i++;
	}
	printf("%d is sum",sum);
	getch();
}