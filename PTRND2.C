#include<stdio.h>
#include<conio.h>
 int main()
{
	int i,j,n,position=1;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",position%2);
			position++;
		}
		printf("\n");
	}
	getch();
}