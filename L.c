#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,x;
		scanf("%d%d",&n,&x);
		
		if(x==0) printf("no\n");
		else printf("yes\n");
	}	  
	return 0;
}

