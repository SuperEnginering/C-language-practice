#include <stdio.h>

int main(){
	//���� ��С��100��С��1000  ˵��ΪXXX.X
	double a;
	scanf("%lf", &a);
	//��������
	int a1 = a * 10;//ΪXXXX
	//��ȡÿһλ
	//��
	int ge = a1 % 10;
	//ʮ
	int shi = a1 / 10 % 10;
	//��
	int bai = a1 / 100 % 10;
	//ǧ
	int qian = a1 / 1000 % 10;
	//���������
	int a2 = qian + bai * 10 + shi * 100 + ge * 1000;
	//���
    //printf("%d\n", a2);
	double b=a2*0.001;
	printf("%.3f\n", b);
	return 0;
} 
