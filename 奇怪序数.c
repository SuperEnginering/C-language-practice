#include <stdio.h>

//1 2 3 .... 998 999
int main(void) 
{
 	int N;
	while (scanf("%d",&N) != EOF)
	{
		int bai=N/100%10;
		int shi=N/10%10;
		int ge=N%10;		
		printf("%d",N);
		//bai 0 ss  not 0  rd
		if(bai!=0)
		{
			printf("rd");
			}
		else
		{
			printf("ss");
			}	 
			
		if(shi==1||shi==5||shi==9)
		{
			printf("nd");
			}	
		else
		{
			printf("ss");
		}
		
		if(ge==3||ge==2||ge==7)
		{
			printf("st\n");
		}
		else
		{
			printf("ss\n");
		}
    }
    return 0;
}




