#include <stdio.h>
int main(){
	 // �� �� 
	int a, b;
	int j, i;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++){
		if(i==1||i==a){
			for(j=1;j<=b;j++)printf("*");
		}
		else{
		    for (j=1;j<=b;j++){
		    	if	    (j==1)printf("*");
		    	else if (j==b)printf("*");
		    	else{
		    		printf(" ");	
				}
		    			    	
			}
		
		}	printf("\n");
	}
	return 0;
} 
