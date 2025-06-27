#include<stdio.h>
#include<conio.h>
 int main()
{       int a[10],i,n,max,max2;
	 
	printf("enter n:");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	max=max2=-32768;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max2=max;
			max=a[i];
		}
		else if(a[i]<max && a[i]>max2)
		{
			max2=a[i];
		}
	}
	printf("%d is 2nd largest",max2);
	getch();
}