#define _CRT_SECURE_NO_WARNINGS

// ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>

void func_t() {
	int scan_num = 0;
	do {
		scanf("%d", &scan_num);
		switch (scan_num)
		{
			case 1: {
				printf("����Ϊ1����ʼ��Ϸ");
				int num = 0;
				srand(time(NULL));
				num = rand();
				printf("�����%d",num);
				break;
			}case 0:{
				printf("����Ϊ0��������Ϸ");
				break;
			}default: {
				printf("����Ƿ���������Ϸ");
				break; 
			}
		}
	} while (scan_num);
	
}