#include <stdio.h>

int main(void)
{
	int x,y;
	while (scanf("%d",&x)!=EOF)
	{
		for(y=1;y<40000;y*=2)
		{
			if (y==x)
			{
				printf("YES\n");
				break;
			}
		}
		if( y!=x && x%1024 ==0)
		{
			printf("YES\n");
		}else if ( y!=x && x%1024 !=1024 )
		{
			printf("NO\n");
		}
		
	}
	return 0;
}
	 
	 
    


