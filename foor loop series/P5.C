#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i<=-n;i++)
	{
		printf("\n %d",i);
	}
	getch();
}