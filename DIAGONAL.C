#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10][10],i,j,k,n,flag=1;
	 
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
	i=0;
	j=0;
	k=n-1;
	while(i<n && j<n &&  k>=0)
	{
		if(a[i][j]!=a[i][k])
		{
			flag=0;
		}
		i++;
		j++;
		k--;


	}
	if(flag)
		printf("diagonals equal");
	else
		printf("diagonals not equal");
	getch();
}