#include<stdio.h>
#include<conio.h>
 int main()
{
	int age,roll,enc,input;
	 
	printf("enter age and rollno :");
	scanf("%d%d",&age,&roll);
	enc=age^roll;
	printf("encoded value:%d",enc);
	printf("\nenter roll no:");
	scanf("%d",&input);
	printf("decoded value:%d",enc^input);

	getch();
}