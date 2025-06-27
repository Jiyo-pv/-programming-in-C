#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10][10],i,j,n,flag=0;
	 
	printf("enter order of matrix :");
	scanf("%d",&n);
	printf("enter matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				flag++;
				break;
			}
		}
	}
	if(flag)
		printf("not  equal");
	else
		printf("equal");
	getch();
}