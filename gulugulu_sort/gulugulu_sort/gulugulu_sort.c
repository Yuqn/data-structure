#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 冒泡排序方法
void gulugulu_sort(int* arr, int sz) {
	printf("传递%d\n",arr[1]);
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int arr[] = {9,4,3,2,1,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	gulugulu_sort(arr,sz);
	printf("=======================%d\n",sz);
	for (int i = 0; i < sz; i++) {
		printf("输出数组结果为%d\n",arr[i]);
	}
	return 0;
}