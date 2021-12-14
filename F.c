#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	int flag=3;

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		int fang1[N][N];
		int fang2[N][N];
		int i,j;
		for(i=0;i<N;i++)
			for(j=0;j<N;j++)
				scanf("%d",&fang1[i][j]);	
		for(i=0;i<N;i++)
			for(j=0;j<N;j++)
				scanf("%d",&fang2[i][j]);
	//关键代码 
		int zhuan;
		for(zhuan=0;zhuan<4;zhuan++)
		{
			// 顺时针旋转90
			if(zhuan!=0)
			{
				int m,n;
				int temp[N][N];
				for(m=0;m<N;m++)
				{
					for(n=0;n<N;n++)
					{
						temp[n][N-1-m]=fang1[m][n]; 
					}
				}
//				for(m=0;m<N;m++)
//				{
//					for(n=0;n<N;n++)
//					{
//						printf("%d ",fang1[m][n]); 
//					}
//					printf("\n");
//				}
				//赋值回去 
				for(m=0;m<N;m++)
				{
					for(n=0;n<N;n++)
					{
						fang1[m][n]=temp[m][n]; 
					}
				}
				
//				for(m=0;m<N;m++)
//				{
//					for(n=0;n<N;n++)
//					{
//						printf("%d ",fang1[m][n]); 
//					}
//					printf("\n");
//				}	
			}
			
			//比较
		
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{
					if(fang1[i][j]!=fang2[i][j])
					{
						flag=0;
						break;//不相等 
					}else flag=1;		
				}
				if(flag==0) break;//转一圈 
			}
			
			if(flag==1)//说明相等
			{
				break;
			} 
			
		}
		if(zhuan!=4)
		{
			if(zhuan==3) printf("1\n");
			else printf("%d\n",zhuan);
		}
		else
		{
			printf("-1\n");
		}
		
	}
	return 0;
}
