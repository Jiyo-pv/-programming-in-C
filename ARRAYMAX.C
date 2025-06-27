#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
{       int a[10],i,n,max;
	 
	printf("enter n:");
	scanf("%d",&n);
	a[0]=-32768;
	max=a[0];
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
	}
	printf("%d is largest",max);
	getch();
}