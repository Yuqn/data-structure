#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap_num(int* x,int* y) {
	printf("ͨ����ַ�õ�num1ֵΪ%d\n", *x);
	printf("ͨ����ַ�õ�num2ֵΪ%d\n", *y);
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
	printf("�������\n");
	printf("ͨ����ַ������num1ֵΪ%d\n", *x);
	printf("ͨ����ַ������num2ֵΪ%d\n", *y);
}

void get_arr(int* arr) {
	printf("������������%d\n",arr);
	printf("������������%d\n", arr+1);
}

int main() {
	int num1 = 0;
	int num2 = 1;
	int* p_num1 = &num1;
	int* p_num2 = &num2;
	printf("ԭnum1ֵΪ%d\n",num1);
	printf("ԭnum2ֵΪ%d\n", num2);
	swap_num(p_num1, p_num2);
	printf("����num1ֵΪ%d\n", num1);
	printf("����num2ֵΪ%d\n", num2);

	int arr[] = { 1,2,3,4,5 };
	get_arr(arr);
	printf("�����ַ%d\n",&arr[0]);
	printf("�����ַ%d\n", &arr[1]);
	printf("�����ַ%d\n", &arr[2]);
	return 0;
}