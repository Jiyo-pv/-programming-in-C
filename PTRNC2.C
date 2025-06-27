 #include<stdio.h>
 #include<conio.h>
  int main()
 {
	int i,j,n,status;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{       status=1;
		for(j=1;j<=i;j++)
		{

			printf("%d",status);
			status=(status)?status-1:status+1;
		}
		printf("\n");

	}
	getch();
 }