#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void get_val(int num) {
	int newVal = num / 10;
	int newNum = num % 10;
	printf("Êä³öÊý×ÖÎª%d\n", newNum);
	if(num >9)
	get_val(newVal);
}