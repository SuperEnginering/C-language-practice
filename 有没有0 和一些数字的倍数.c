#include <stdio.h>
int main(void) {
 int n;
 while ( scanf("%d",&n)!=EOF){
	int flag=0;
	int a=n;
    if(n==0) flag=1;
    
  //���ж����޺�0  judge by a  1 you0  0 wu0
  		while (a){
  			if( a%10==0){
  				flag=1;
			  }
			  a/=10;
		  }
	  if(flag==1){
	  	printf("AC\n");
	  	continue;
	  }
	  // if not 
	   if( flag!=1){
	    //�ж��Ƿ�Ϊ  ����  
	  //AC ��nǡ�ö���6��9�ı��������ҼȲ���7Ҳ����8�ı���ʱ    
	    if ( (n%6 == 0 && n%9 == 0) &&  n%7 !=0 && n%8 != 0 )  {
	   printf("AC\n"); // printf("a\n");
	   continue ; 
	    }      
	  //WA ��n��7��8�ı��������ҼȲ���6Ҳ����9�ı���ʱ
	   else if( ( n%7 ==0 || n%8 ==0) &&  n%6 !=0 && n%9 !=0  ) {
	    printf("WA\n");//printf("b\n");
	    continue ;
	   }
	  //all not 
	  else {
	   printf("TLE\n");//printf("c\n");
	   continue ;
	   }
	  }
 
 }
    return 0;
}


