#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10][10],i,j,m,n;
	 
	printf("enter order of matrix :");
	scanf("%d%d",&m,&n);
	printf("enter matrix 1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("transpose is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[j][i]);

		}
		printf("\n");

	}

	getch();
}