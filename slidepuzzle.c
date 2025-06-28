#include<stdio.h>
#include<conio.h>             //this  was included to use clrscr() to clear the screen(optional)
//@2025 jiyo p v
//this program is simulating a puzzle game where we move the 0 in a 4x4 matrix until we get all the elements from 1 to 15 in sequence
//at the end 0 must be back at the last position while other elements are in ascending order
void swap(int a[4][4],int pos_r,int pos_c,int row,int col)
{
	int temp=a[row][col];
	a[row][col]=a[pos_r][pos_c];
	a[pos_r][pos_c]=temp;
}
int check_status(int a[4][4])
{
	int i,j,status=1,flag=1;
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
	    {
		if(status!=a[i][j])
		{
			flag=0;
		}
		status=(status+1)%16;
	    }
	}
	return flag;

}
int main()          //void main() works only in turbo c
{
	int a[4][4]={{1,4,2,3},{9,6,7,8},{5,10,11,15},{13,14,12,0}};
	int pos_r=3,pos_c=3;

	int i,j;
	int move=0;
	char ch;

	
	do
	{
		system("clear");    //clrscr() in turbo c doesnt work in online compiler so we use system("clear")
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(a[i][j]==0)
				{
					printf("|0|\t");
				}
				else
				{
					printf("%d\t",a[i][j]);
				}
			}
			printf("\n");
		}
		printf("w)up 	s)down	 d)right    a)left   0)exit	\n->");
		ch=getchar(); //getch() can be used in turbo c to prevent use of  enter key
		                //online compiler doesnt have getch() so we can use getchar()
		                
		move++;
		switch(ch)
		{
			case 'w':
				if(pos_r-1!=-1)
				{
					swap(a,pos_r,pos_c,pos_r-1,pos_c);
					pos_r--;
				}
				break;
			case 's':
				if(pos_r+1!=4)
				{
					swap(a,pos_r,pos_c,pos_r+1,pos_c);
					pos_r++;
				}
				break;
			case 'a':
				if(pos_c-1!=-1)
				{
					swap(a,pos_r,pos_c,pos_r,pos_c-1);
					pos_c--;
				}
				break;
			case 'd':
				if(pos_c+1!=4)
				{
					swap(a,pos_r,pos_c,pos_r,pos_c+1);
					pos_c++;
				}
				break;
			case '0':
				system("clear");
				printf("aborted game");
			
				return 0;

			default:
				printf("invalid choice\n");
			
		}

		if(check_status(a))
		{
			system("clear");
			printf("well done you won\n");
			break;
		}
	}while(ch!='0');
	printf("\nyou took %d moves",move-1);  //-1 used as after loop move will have incremented once
	getch();
  return 0;

}
