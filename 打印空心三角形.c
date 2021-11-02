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

void nullangle(char ch,int height)
{
	
	int i;
	for (i=1;i<=height;i++)
	{
		if(i!=height)
		{
			
		
		int k;
			for(k=1;k<=height-i;k++)
			{
				printf(" ");
			}
		int j;
		
			for(j=1;j<=(2*i-1);j++)
			{
				if(j==1 || j==2*i-1 )
				printf("%c",ch);	
				else
				printf(" ");
			}
			printf("\n");
		}	
		else
		{
			int l;
			for(l=0;l<height*2-1;l++)
			{
				printf("%c",ch);
			}
		}
	}
			printf("\n");	
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
		nullangle(ch,n);
		
		printf("\n");
		
	}
    return 0;
}




