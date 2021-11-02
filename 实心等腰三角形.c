#include <stdio.h>

void angle(char ch,int height)
{
		int i;
		for(i=1;i<=height;i++)
		{
			int j,k;
			for(k=1;k<=height-i;k++)
			{
				printf(" ");
			}

			for(j=1;j<=(2*i-1);j++)
			{
				printf("%c",ch);
			}
			
			printf("\n");
		}
	
} 


int main(void) 
{
	char ch;
	int n,k;	
	while ((ch=getchar()) != '@')
	{
		k++;
		getchar();
		scanf("%d",&n);
		getchar();
		angle(ch,n);
		
	}
    return 0;
}




