 #include<stdio.h>
 #include<conio.h>
  int main()
 {
	int a[20],i,j,n;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{

			printf("%d\t",a[j]);

		}
		printf("\n");

	}
	getch();
 }