#include <stdio.h>

int main(){
	//输入 不小于100且小于1000  说明为XXX.X
	double a;
	scanf("%lf", &a);
	//变正整数
	int a1 = a * 10;//为XXXX
	//提取每一位
	//个
	int ge = a1 % 10;
	//十
	int shi = a1 / 10 % 10;
	//百
	int bai = a1 / 100 % 10;
	//千
	int qian = a1 / 1000 % 10;
	//换后的数是
	int a2 = qian + bai * 10 + shi * 100 + ge * 1000;
	//输出
    //printf("%d\n", a2);
	double b=a2*0.001;
	printf("%.3f\n", b);
	return 0;
} 
