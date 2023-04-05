#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include <iostream>

// 创建结构体
struct Student
{
	char id[100];
	char name[10];
	int age;
};

int main() {
	
	// 实例化
	struct Student stu = { "1906200329","余其楠",20};
	// stu.id = "1111111"; -----------这是错误示范，因为id是字符数组，可以使用 strcpy(原数组，新内容) 方法
	strcpy(stu.name, "yuqn");
	printf("结构体内容%s\n", stu.id);
	printf("结构体内容%s\n", stu.name);
	printf("结构体内容%d\n", stu.age);

	// 通过指针的方法获取结构体数据
	struct Student* p_stu = &stu;
	printf("结构体存在地址为%p\n",p_stu);
	printf("通过指针的方法获取结构体数据%s\n", p_stu->name);


	return 0;
}