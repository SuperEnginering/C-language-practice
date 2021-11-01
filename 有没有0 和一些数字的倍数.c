#include <stdio.h>
int main(void) {
 int n;
 while ( scanf("%d",&n)!=EOF){
	int flag=0;
	int a=n;
    if(n==0) flag=1;
    
  //先判断有无含0  judge by a  1 you0  0 wu0
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
	    //判断是否为  倍数  
	  //AC 当n恰好都是6和9的倍数，并且既不是7也不是8的倍数时    
	    if ( (n%6 == 0 && n%9 == 0) &&  n%7 !=0 && n%8 != 0 )  {
	   printf("AC\n"); // printf("a\n");
	   continue ; 
	    }      
	  //WA 当n是7或8的倍数，并且既不是6也不是9的倍数时
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


