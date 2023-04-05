#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int AddFun(int x ,int y) {
	return x + y;
}

int get_max(int* x,int* y){
	printf("\narrOne地址%s\n", *x);
	printf("arrTwo地址%s\n", *y);
	return x > y ? x : y;
}
// 宏
// #define max(x,y)(x>y?x:y)
int main() {
	int a = 10;
	int b = 2;
	int c = AddFun(a,b);
	printf("两数之和为%d\n",c);

	char arrOne[10] = "abcdefg";
	char arrTwo[10] = "yuqn";
	char* arrp = &arrOne;
	// printf("strcpy函数使用%s\n", strcpy(arrOne,arrTwo));
	printf("%c\n",arrOne[5]);
	
	// memset 方法
	memset(arrOne, '*', 5);
	printf("memset 方法%s\n", arrOne);
	for (int i = 0; i < strlen(arrOne);i++) {
		printf("%c-", arrOne[i]);
	}

	printf("自定义函数%d\n", get_max(&a, &b));
	printf("自定义函数%d\n", get_max(&arrOne, &arrTwo));

	
	
	return 0;
}