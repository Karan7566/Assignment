#include<stdio.h>
int main()
{
	int i,j,no[2][2],no1[2][2],ans[2][2];
	printf("The First Array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&no[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",no[i][j]);
		}
		printf("\n");
	}
	printf("The Second Array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&no1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",no1[i][j]);
		}
		printf("\n");
	}
	printf("\n Ths multiplication of Array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ans[i][j]=no[i][j]*no1[i][j];
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
