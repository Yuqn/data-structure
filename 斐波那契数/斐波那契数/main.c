#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ����쳲�������
int get_fbnqs(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main() {

	char arr[] = "abcde";
	char arr2[] = {'a','b','c','d','e'};



	//int i = 50;  
	//int num1 = 0;
	//int scannum = -1;
	//while (i)
	//{
	//	// ������
	//	scanf("%d",&scannum);
	//	if (scannum == -1) { 
	//		printf("����-1������");
	//		break; 
	//	};
	//	if (scannum > 4 || scannum < -1) {
	//		printf("���벻�淶����������");
	//		continue;
	//	}
	//	num1++;
	//	i--;
	//}
	//printf("�ܹ������ˣ�%d", num1);


	// ���õ�n��쳲�������
	int num = 5;
	int ret = get_fbnqs(num);
	printf("��%d��쳲�������ֵΪ%d",num,ret);
	return 0;
}