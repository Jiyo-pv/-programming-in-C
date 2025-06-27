#include<stdio.h>
#include<conio.h>
 int main()
{       int n,fact=1,sum=0,one=-1,i;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{       one*=-1;
		fact*=i;
		sum+=one*(i/fact);
	}

	printf("%d is sum",sum);
	getch();
}