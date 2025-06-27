#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
{       int a[10],i,n;
	 
	printf("enter n:");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{       if(a[i]%2==0)
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{       if(a[i]%2!=0)
		printf("%d\t",a[i]);
	 }

	getch();
}