 #include<stdio.h>
 #include<conio.h>
  int main()
 {
	int i,j,n;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{

			printf("%d",j);

		}
		printf("\n");

	}
	getch();
 }