#include <stdio.h>

// ��Ȫˮ1.5Ԫһƿ������2Ԫһƿ����֭3.5Ԫһƿ
// ��Ȫˮ 15�� һƿ������ 20�� һƿ����֭ 35�� һƿ
int main(void) {
    int T;
    scanf("%d",&T);
    
    while (T--)
    {
    	int N;
    	scanf("%d",&N); //N����С����Ǯ 
		int a,b,c;
		int cha=10000;
		for (a=0;a<=66;a++)//��Ȫˮ
		{
						
			for ( b=0;b<=500;b++)//���� 
			{
				for (c=0;c<=28;c++)//��֭
				{
					//�жϳ��ֵ���Сֵ
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
