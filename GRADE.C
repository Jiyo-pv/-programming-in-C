#include<stdio.h>
#include<conio.h>
 int main()
{
	char grade;
	int m1,m2,m3,m4,m5,percent;
	 
	printf("enter 5 marks\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	percent=((m1+m2+m3+m4+m5)/500)*100;
	if(percent>=90)
		grade='A';
	else if(percent>=80 && percent<90)
		grade='B';
	else if(percent>=70 && percent<80)
		grade='C';
	else if(percent>=60 && percent<70)
		grade='D';
	else if(percent>=50 && percent<60)
		grade='E';
	else
		grade='F';
	printf("grade=%c",grade);
	getch();
}