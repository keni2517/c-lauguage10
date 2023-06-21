#include<stdio.h>
int main()
{
	int i,j,l=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf(" %c ",j);
			}
			else
			{
				printf("%c",l+32);
				l++;
			}
		}
		printf("\n");
	}
	return 0;
}