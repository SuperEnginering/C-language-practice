#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char str[100005];
int  da[30];
int  xiao[30];
int flag=0;
int main()
{
	int T;
	scanf("%d",&T);
//	getchar();
	while(T--)
	{
		int n;
		scanf("%d",&n);
		getchar();
		int i;
		for(i=0;i<n;i++)
		{
			getchar();
			scanf("%c",str[i]);
			getchar();
			da[i]=0;
			xiao[i]=0;
		}
		//ȷ��������ĸ�ĸ��� 
		int len=strlen(str);
		for(i=0;i=len;i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				da[str[i]-'A']++;	
			}	
			if(str[i]>='a'&&str[i]<='z')
			{
				xiao[str[i]-'a']++;	
			}
		}
		//�������ж���ĸ�����Ƿ�Ϊż��
		
		//���lenΪż�������޷�������������ĸ
		int jo=0;
		if(len%2==2)
		{
			jo=1;
		} 
		for(i=0;i<len;i++) 
		{
			//����da��xiao����ĸ����
				if(da[i]%2==0&&da[i]!=0)  flag++;
				if(xiao[i]%2==0&&xiao[i]!=0) flag++;
		}
			
		
		if(jo)//�޷�������������ĸ
		{
			printf("%d\n",flag);	
		}
		else//������һ������ 
		{
			flag++;
			printf("%d\n",flag);
		}
		
		
		
	}	  
	return 0;
}
