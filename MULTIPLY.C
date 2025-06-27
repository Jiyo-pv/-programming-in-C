#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10][10],b[10][10],i,j,k,m,n,p,q,c;
	 
	printf("enter order of matrix 1:");
	scanf("%d%d",&m,&n);
	printf("enter matrix 1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter order of 2nd matrix\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("invalid operation");
		return 0;
	}
	printf("enter 2nd matrix\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("product is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c=0;
			for(k=0;k<n;k++)
			{
				c+=a[i][k]*b[k][j];
			}
			printf("%d\t",c);

		}
		printf("\n");

	}

	getch();
}