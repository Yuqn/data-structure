#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int num_for_int(int x,int y) {
	return x + y;
}
void num_for_void(char* p) {
	
}
int num_for_int2(int x, int y) {
	return x - y;
}
int main() {

	// ��ȡ������ָ��
	int (*p_num_for_int)(int,int) = &num_for_int;
	void (*p_num_for_void)(char*) = &num_for_void;
	// ����ָ������
	int (*p[2])(int, int) = { &num_for_int ,&num_for_int2};
	// ������
	int num = (*p_num_for_int)(1, 2);
	int num2=(*p[1]) (1, 1);
	printf("����ָ������%d",num2);

	int a[] = { 1,2,3,4 };
	printf("int���ʹ�С%d\n",sizeof(a+0));
	return 0;
}