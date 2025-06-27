#include<stdio.h>
#include<conio.h>
 int main()
{
	int i,j,n,toggle=0;
	 
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if((i+j)%2==0){
				(toggle<2)?printf("1 "):printf("0 ");
			}
			else
			{
				(toggle>=2)?printf("1 "):printf("0 ");
			}
		}
		toggle=(toggle+1)%4;
		printf("\n");
	}
	getch();
}