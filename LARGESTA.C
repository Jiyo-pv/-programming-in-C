#include<stdio.h>
#include<conio.h>
 int main()
{
	int a[10],max,i,n;
	 
	printf("enter n:");
	scanf("%d",&n);
	a[0]=-32768;
	max=a[0];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]->",i);
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];

	}
	printf("max is %d",max);
	getch();

}