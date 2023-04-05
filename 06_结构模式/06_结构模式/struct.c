#define _CRT_SECURE_NO_WARNINGS

// 引入库文件
#include<stdio.h>
#include<Windows.h>

// 引入文件
#include "add.h"

// 定义常量
#define def_max 100;


// 定义结构体
struct Student
{
	char name[10];
	int age;
};

// 定义宏
#define hone_max(x,y)(x>y?x:y)
int main() {
	printf("两数之和为%d\n", add(20, 20));
	// 线程睡眠
	Sleep(2000);
	int arr[] = { 1,2,3 };
	printf("宏%d", hone_max(10, 20));
	// 结构体赋值
	struct Student student = { "yuqn",22 };
	struct Student * ps = &student;
	// 结构体取值
	printf("结构体取值%s\n", student.name);
	printf("结构体取值%s %d\n", (*ps).name,(*ps).age);
	printf("结构体取值%s %d\n", ps->name, ps->age);
	return 0;
}