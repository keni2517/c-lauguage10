#include<stdio.h>
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter val:");
			scanf("  %d",&a[i][j]);
		}
	}
	printf("sparse matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(a[i][j]==0)
			printf(" ");
		else
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}