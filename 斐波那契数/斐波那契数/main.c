#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 计算斐波那契数
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
	//	// 输入数
	//	scanf("%d",&scannum);
	//	if (scannum == -1) { 
	//		printf("输入-1，结束");
	//		break; 
	//	};
	//	if (scannum > 4 || scannum < -1) {
	//		printf("输入不规范，重新输入");
	//		continue;
	//	}
	//	num1++;
	//	i--;
	//}
	//printf("总共输入了：%d", num1);


	// 设置第n个斐波那契数
	int num = 5;
	int ret = get_fbnqs(num);
	printf("第%d个斐波那契数值为%d",num,ret);
	return 0;
}