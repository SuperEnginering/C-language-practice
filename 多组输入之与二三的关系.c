#include <stdio.h>
int main(){
	int T; 
	scanf("%d",&T);
	while(T--){
		//先输入一个数
		int a; 
		scanf("%d",&a);
		//判断与2，3的关系
		if( a%2==0&&a%3==0) {
			printf("%d divisible by 2 and 3? 1\n",a);	
		}else{
			printf("%d divisible by 2 and 3? 0\n",a);
		}
		if( a%2==0||a%3==0) {
			printf("%d divisible by 2 or 3? 1\n",a);
		}else{
			printf("%d divisible by 2 or 3? 0\n",a);
		}
		if( (a%2!=0&&a%3==0)||(a%2==0&&a%3!=0)) {
			printf("%d divisible by 2 or 3, but not both? 1\n",a);
		}else{
			printf("%d divisible by 2 or 3, but not both? 0\n",a);
		}
		
	}
	
	return 0;
}
