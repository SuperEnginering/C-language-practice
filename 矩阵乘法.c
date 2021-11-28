#include<stdio.h>
#include<string.h> 
#include<math.h>

int main()
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	
	int arr1[n][m],arr2[m][k];
	int arr3[n][k];
	
	int i,j,l;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr1[i][j]);
			
		}
	}
	
	for(j=0;j<m;j++)
	{
		for(l=0;l<k;l++)
		{
			scanf("%d",&arr2[j][l]);
		}
	}
	
	
	for(i=0;i<n;i++)//第一个矩阵的行 
	{
		for(l=0;l<k;l++)//第二个矩阵的列 
		{
			int sum=0;
			for(j=0;j<m;j++)//一个个向下 
			{
				sum+=arr1[i][j]*arr2[j][l];
			}
			arr3[i][l]=sum;//给矩阵i，j位置赋值 
		}
	}
	
	
	for(i=0;i<n;i++)
	{
		for(l=0;l<k;l++)
		{
			if(l==0) printf("%d",arr3[i][l]);
			else printf(" %d",arr3[i][l]);
		}
		printf("\n");
	}
	
	
	return 0;
}
