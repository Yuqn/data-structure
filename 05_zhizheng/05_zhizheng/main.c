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
	/// ��ʼֵΪ0
	/// </summary>
	static int num = 0;
	num++;
	printf("��������ֵ%d\n",num);
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

	// ÿ�ε��ú�������ֵ��һ
	printf("��һ�ε���\n");
	add_num();
	printf("�ڶ��ε���\n");
	add_num();
	return 0;
}