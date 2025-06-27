#include<stdio.h>
#include<conio.h>
 int main()
{
	float f;
	 
	printf("enter farenheit:");
	scanf("%f",&f);
	printf("centigrade=%f",(f-32)*(5/9));
	getch();
}