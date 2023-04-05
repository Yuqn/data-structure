#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

enum WEATHER
{
	ONE = 1,
	TWO = 2,
	THREE = 3
};
int main() {
	enum WEATHER weather = ONE;
	printf("%d", weather);
	printf("%d\n",THREE);
	return 0;
}