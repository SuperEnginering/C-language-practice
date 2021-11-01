#include <stdio.h>

// 矿泉水1.5元一瓶，可乐2元一瓶，橙汁3.5元一瓶
// 矿泉水 15分 一瓶，可乐 20分 一瓶，橙汁 35分 一瓶
int main(void) {
    int T;
    scanf("%d",&T);
    
    while (T--)
    {
    	int N;
    	scanf("%d",&N); //N代表小明的钱 
		int a,b,c;
		int cha=10000;
		for (a=0;a<=66;a++)//矿泉水
		{
						
			for ( b=0;b<=500;b++)//可乐 
			{
				for (c=0;c<=28;c++)//橙汁
				{
					//判断出现的最小值
					if((a*150+b*200+c*350)>N)
					{
						break;
					 } 
					else 
					{
						int ca=N-(a*150+b*200+c*350);
						if(ca<cha)
						{
							cha=ca;
						}
					}
					//printf("%d\n",cha);
					
				}
			}
			
		}
		 printf("%d\n",cha);	
	}   
    return 0;
}
