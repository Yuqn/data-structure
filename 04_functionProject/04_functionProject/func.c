#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int AddFun(int x ,int y) {
	return x + y;
}

int get_max(int* x,int* y){
	printf("\narrOne��ַ%s\n", *x);
	printf("arrTwo��ַ%s\n", *y);
	return x > y ? x : y;
}
// ��
// #define max(x,y)(x>y?x:y)
int main() {
	int a = 10;
	int b = 2;
	int c = AddFun(a,b);
	printf("����֮��Ϊ%d\n",c);

	char arrOne[10] = "abcdefg";
	char arrTwo[10] = "yuqn";
	char* arrp = &arrOne;
	// printf("strcpy����ʹ��%s\n", strcpy(arrOne,arrTwo));
	printf("%c\n",arrOne[5]);
	
	// memset ����
	memset(arrOne, '*', 5);
	printf("memset ����%s\n", arrOne);
	for (int i = 0; i < strlen(arrOne);i++) {
		printf("%c-", arrOne[i]);
	}

	printf("�Զ��庯��%d\n", get_max(&a, &b));
	printf("�Զ��庯��%d\n", get_max(&arrOne, &arrTwo));

	
	
	return 0;
}