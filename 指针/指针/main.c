#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	int arr[] = {1,2,3};
	int* p_arr = &arr; 
	p_arr++;// ����ָ�����ĸ��ֽ�
	printf("%d\n",*p_arr);


	// Ұָ��
	int* p_num_two = NULL;
	int num_two = 1;
	p_num_two = &num_two;
	printf("%d\n",*p_num_two);
	// Ұָ��-Խ�����

	// ָ���������ʾ����֮�����
	int arr_three[] = { 1,2,3,4,5 };
	int* arr_thrr_p = &arr_three[0];
	int* arr_thrr_p2 = &arr_three[3];
	printf("ָ�����%d\n", arr_thrr_p2 - arr_thrr_p);// 3

	// ����ָ��
	int num = 1;
	int* p_num = &num;
	int** p_p_num = &p_num;
	printf("����ָ��%d\n", &p_num);
	printf("����ָ��%d\n", p_p_num);

	return 0;
}

