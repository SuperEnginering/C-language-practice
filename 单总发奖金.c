#include <stdio.h>

//AK����������ȫ������Ŀ��������5Ԫ��
//���������ǵ�һ��5Ԫ���ڶ���3Ԫ��������1Ԫ��
//ÿ����Ŀֻ������MԪǮ
int main(void) {
    	int a1,a2,a3,a4;//��Ǯ���� 
		double M;//ÿ�⽱�� 
		int b;//��û��AK���� 
		int number;//���� 
		
   	while (	scanf("%d %d %d %d %lf %d %d",&a1,&a2,&a3,&a4,&M,&b,&number) != EOF)
	{
		double money=0;
		//ǰ�ĵ� 
		if( a1!=0) money+=M/a1;
		if( a2!=0) money+=M/a2;
		if( a3!=0) money+=M/a3;
		if( a4!=0) money+=M/a4;
		//AK 
		if (b)
		{
			money+=5;
		}
		//���� 
		switch (number){
			case 1:{
				money+=5;
				break;
			}
			case 2:{
				money+=3;
				break;
			}
			case 3:{
				money+=1;
				break;
			}
				
				
		}
		 
	  printf("%.2f\n",money);	
	 }  
    return 0;
}

