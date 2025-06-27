#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10][10],i,j,m,n,row[10],col[10];
	 
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
	for(i=0;i<m;i++)
	{       row[i]=0;
		for(j=0;j<n;j++)
		{
		     row[i]+=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		col[i]=0;
		for(j=0;j<m;j++)
		{
			col[i]+=a[j][i];
		}
	}

	for(i=0;i<m;i++)
		printf("%d row sum=%d\n",i+1,row[i]);
	for(i=0;i<n;i++)
		printf("%d column sum=%d\n",i+1,col[i]);
	getch();
}