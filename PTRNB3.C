 #include<stdio.h>
 #include<conio.h>
 void show(int n,int limit)
 {
	if(n==limit)
	{
		printf("%d\n",n);
		return;
	}
	printf("%d\t",n);
	show(n+1,limit);
 }
  int main()
 {
	int a[20],i,j,n;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		show(1,i);
	}
	getch();
 }