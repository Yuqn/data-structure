#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void print(int(*p)[5], int r, int c) {
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d", (*(p + i))[j]);
			//printf("%d", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main() {
	char tt[] = { 'a','b','c' };
	char tt1[] = { 'a','b','c' };
	char char_one[] = "hello world!";
	char char_two[] = "hello world!";
	char* p_char_one = "hello world!";
	char* p_char_two = "hello world!";
	printf(tt == tt1 ? "相同" : "不同");
	printf("\n");
	printf(char_one == char_two ? "相同" : "不同");
	printf("\n");
	printf(*p_char_one == *p_char_two ? "相同" : "不同");

	// 指针数组
	// 数组存放指针（地址）
	int* p_arr_one[3]; // 存放整形指针的数组

	// 数组指针
	int arr[10] = { 0 };
	int (*p_arr)[10] = &arr;
	double* d[5];
	double* (*p_d)[5] = &d;
	int arr_two[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print(arr_two, 3, 5);//这里会吧二位数组的第一个一维数组做参数

	return 0;
}
