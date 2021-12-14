#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct 
{
	int love;
	char name[30];
}song;

int cmp(const void *a,const void *b)
{
	return (*(song*)a).love < (*(song*)b).love ? 1:-1;
}
song s[100005];
int main()
{
	long long int n;
	scanf("%lld",&n);
	
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&s[i].love ,&s[i].name );	
	}
	int k;
	scanf("%d",&k);
	
	qsort(s,n,sizeof(s[0]),cmp);
//	for(i=0;i<n;i++)
//	 printf("%s\n",s[i].name );
	printf("%s",s[k].name);
	return 0;
}
