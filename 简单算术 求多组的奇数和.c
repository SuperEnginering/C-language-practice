#include <stdio.h>
 
int main(void)
{
   	int n,N,sum=0;
	
	while ( scanf("%d",&N)!=EOF){
		while ( N--){
    	scanf("%d",&n);
		if (n%2==1){
			sum+=n;
		}		
	}
	printf("%d\n",sum);
	sum=0;	
	}
	return 0;
}


