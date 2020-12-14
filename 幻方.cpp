#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int matri[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		matri[i][j]=0;
		}
	 } 
	int x=0,y=(n-1)/2;
	for(int i=1;i<=n*n;i++)
	{
		matri[x][y]=i;
		if(x==0&&y!=n-1)
		{
			x=n-1;
			y=y+1;
		}
		else if(x!=0&&y==n-1)
		{
			y=0;
			x=x-1;
		}
		else if(x==0&&y==n-1)
		{
			x=x+1;
		}
		else if(x!=0&&y!=n-1)
		{
			if(matri[x-1][y+1]==0)
			{
				x=x-1;
				y=y+1;
			}
			else
			{
				x=x+1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",matri[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
