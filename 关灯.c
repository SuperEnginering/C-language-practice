#include <stdio.h>
#include <math.h>

int main(void) {
    int n,m,k;
	scanf( "%d %d %d",&n,&m,&k);
	while ( k--){
		int a,flag=1;
		scanf("%d",&a);
		if (a<=m){
			flag=0;
		}
		else {
			int i;
			for ( i=2;i<=m;i++){
				int j;
				for( j=i;j<=a;j=j*i){
					if(a==j){
						flag=0;
						break;
					}
				}
				if(flag==0)break;
			}
		}
		if(flag==0){
			printf("No\n");
		}
		else{
			printf("Yes\n");
		}
	}	
    return 0;
}


