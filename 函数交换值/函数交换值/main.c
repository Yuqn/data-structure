#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap_num(int* x,int* y) {
	printf("通过地址拿到num1值为%d\n", *x);
	printf("通过地址拿到num2值为%d\n", *y);
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
	printf("交换完成\n");
	printf("通过地址交换后num1值为%d\n", *x);
	printf("通过地址交换后num2值为%d\n", *y);
}

void get_arr(int* arr) {
	printf("接收数组内容%d\n",arr);
	printf("接收数组内容%d\n", arr+1);
}

int main() {
	int num1 = 0;
	int num2 = 1;
	int* p_num1 = &num1;
	int* p_num2 = &num2;
	printf("原num1值为%d\n",num1);
	printf("原num2值为%d\n", num2);
	swap_num(p_num1, p_num2);
	printf("交换num1值为%d\n", num1);
	printf("交换num2值为%d\n", num2);

	int arr[] = { 1,2,3,4,5 };
	get_arr(arr);
	printf("数组地址%d\n",&arr[0]);
	printf("数组地址%d\n", &arr[1]);
	printf("数组地址%d\n", &arr[2]);
	return 0;
}