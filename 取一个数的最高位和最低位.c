#include<stdio.h>
int main()
{
	long long int n;
	int i,a,b;
	scanf("%lld",&n);	
	b=n%10;
	//ÅÐ¶ÏÎ»Êý 
	for (i=10;;i*=10){
		 
		if(n/i==0){
			a=10*n/i;
			break;
		}
	}
	
	printf("%d %d",a,b);
	return 0;
}

