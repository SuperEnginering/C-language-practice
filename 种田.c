#include <stdio.h>
#include <math.h>


int main(void) {
    long long a,b,l;//��a ��b  �����α߳�l
	 
	
    scanf("%lld %lld",&a,&b);
    long long int tili=0;
      while ( a!=0&&b!=0 ) {
    	
    	long long ans=a>b?b:a;
    	tili+=4*ans;
    	if( ans==a){
    		b-=ans;
		}else if(ans==b){
			a-=ans;
		}
  
	}
    
    printf( "%lld\n",tili);
    return 0;
}


