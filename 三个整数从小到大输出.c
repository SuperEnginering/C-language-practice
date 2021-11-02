#include <stdio.h>



void bigger(int min,int mid,int max)
{
	int t;
	if(min>mid){
		t=min;min=mid;mid=t;
	}
	if( min>max){
		t=max;max=min;min=t;
	}
	if(mid>max){
		t=mid;mid=max;max=t;
	}
		
	printf("%d %d %d\n",min,mid,max);	
}

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	bigger(a,b,c);
	return 0;
 } 
