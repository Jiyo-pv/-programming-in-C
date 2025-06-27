#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10][10],b[10][10],i,j,n;
	 
	printf("enter order of matrices:");
	scanf("%d",&n);
	printf("enter matrix 1\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("sum is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);

		}
		printf("\n");
	}

	getch();
}