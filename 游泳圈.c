#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(void) {
    double  a,b;
    scanf("%lf %lf",&a,&b);
    double m,x,h,L;
    scanf("%lf %lf %lf %lf",&m,&x,&h,&L);
    double R=a/2-b;
    double mr=sqrt( m/PI);
    double xr=sqrt( x/PI);
    double hr=sqrt( h/PI);
    double Lr=sqrt( L/PI);
    int c=0;
    if ( mr>R){
    	printf( "mj ");c=1;
	}
	if ( xr>R){
    	printf("xygg ");c=1;
	}
	if ( hr>R){
    	printf("hxgg ");c=1;
	}
	if ( Lr>R){
    	printf("Lily ");c=1;
	}
	if (c==0){
		printf("None");
	} 	
    return 0;
}


