#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
{       int secret=23,attempts=0,n;
	 
	do
	{       attempts;
		printf("predict the number{20-30}:");
		scanf("%d",&n);
		if(n==secret)
			break;

	}while(attempts);
	printf("%d attempts to guess",attempts);
	getch();
}