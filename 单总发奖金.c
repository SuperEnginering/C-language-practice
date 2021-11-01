#include <stdio.h>

//AK（即做出了全部的题目）奖金是5元，
//排名奖金是第一名5元，第二名3元，第三名1元。
//每道题目只设置了M元钱
int main(void) {
    	int a1,a2,a3,a4;//分钱人数 
		double M;//每题奖金 
		int b;//有没有AK奖金 
		int number;//排名 
		
   	while (	scanf("%d %d %d %d %lf %d %d",&a1,&a2,&a3,&a4,&M,&b,&number) != EOF)
	{
		double money=0;
		//前四道 
		if( a1!=0) money+=M/a1;
		if( a2!=0) money+=M/a2;
		if( a3!=0) money+=M/a3;
		if( a4!=0) money+=M/a4;
		//AK 
		if (b)
		{
			money+=5;
		}
		//排名 
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

