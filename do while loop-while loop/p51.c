#include<stdio.h>
int main()
{
	int i=1,j,sp=10;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf(" ");
			j++;
		}		
		j=5;
		while(j>=i)
		{
			printf("* ");
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}