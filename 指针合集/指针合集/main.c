#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void one(int arr[]) {
	arr++;
	printf("%d\n",*arr);
}

void two(int(*p)[3]) {
	p++;
	printf("数组指针%d\n", (*p)[0]);
}

int main() {

	int arr_one[2] = { 1,2 };
	int arr_two[3] = { 1,2,3 };
	int arr_three[2][3] = { 1,2,3,2,3,4 };

	//指针数组
	int* p_arr[2] = {arr_one,arr_two};
	printf("%d\n",p_arr[1][2]);
	//调用方法
	one(arr_one);

	//数组指针
	int (*p_arr_p_one)[2] = &arr_one;
	int(*p_arr_p_two)[2][3] = &arr_three;
	printf("数组指针%d\n", (*p_arr_p_one)[1]);
	printf("数组指针%d\n", (*p_arr_p_two)[0][0]);
	two(arr_three);

	//函数指针
	int (*p_fun_one)(int*) = &one;
	(*p_fun_one)(arr_one);

	//函数指针数组
	int (*p_fun_two[2])(int*) = { &one };
	(*p_fun_two[0])(arr_one);

	return 0;
}