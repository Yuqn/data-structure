#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print(int (*p_arr)[3],int r,int c) {
	p_arr++;
	printf("%d",(*p_arr)[0]);
}
int main() {
	int arr[2][3] = {1,2,3,2,3,4};
	print(arr,2,3);
	int(*p_arr)[3] = &arr;
	return 0;
}