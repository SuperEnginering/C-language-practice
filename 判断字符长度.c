#include<stdio.h>
int main()
{
	char ch[20]={0};
	scanf("%s",&ch);
	if(10>=strlen(ch)){
		printf("GOOD");
	}
	else {
		printf("BAD");
	}
	
	return 0;
}
