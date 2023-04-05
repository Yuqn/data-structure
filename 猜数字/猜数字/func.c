#define _CRT_SECURE_NO_WARNINGS

// 头文件
#include<stdio.h>
#include<stdlib.h>

void func_t() {
	int scan_num = 0;
	do {
		scanf("%d", &scan_num);
		switch (scan_num)
		{
			case 1: {
				printf("输入为1，开始游戏");
				int num = 0;
				srand(time(NULL));
				num = rand();
				printf("随机数%d",num);
				break;
			}case 0:{
				printf("输入为0，结束游戏");
				break;
			}default: {
				printf("输入非法，结束游戏");
				break; 
			}
		}
	} while (scan_num);
	
}