#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10],i,n,pos,num;
	 
	printf("enter n:");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("enter search value:");
	scanf("%d",&num);
	a[n]=num;

	for(i=0;i<=n;i++)
	{       if(a[i]==num)
		{
			pos=i;
			break;
		}

	}
	if(pos==n)
		printf("not found");
	else
		printf("found");

	getch();
}