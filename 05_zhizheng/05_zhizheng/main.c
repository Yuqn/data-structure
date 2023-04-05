#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void get_zz(int *x,int *y,char *z) {
	printf("%p\n", x);
	printf("%p\n", y);
	printf("%p\n", z);
	printf("%d\n", *x);
	printf("%d\n", *y);
	//printf("%c\n", *z);
}

void add_num() {
	/// <summary>
	/// 初始值为0
	/// </summary>
	static int num = 0;
	num++;
	printf("函数返回值%d\n",num);
}
int main() {
	int a = 1;
	int b = 2;
	char c[] = "abc";
	int *pa = &a;
	int *pb = &b;
	char *pc = &c;
	/*printf("%d\n", a);
	printf("%d\n", b);
	printf("%p\n", pa);
	printf("%p\n", pb);*/
	//get_zz(pa,pb,pc);

	// 每次调用函数，数值加一
	printf("第一次调用\n");
	add_num();
	printf("第二次调用\n");
	add_num();
	return 0;
}