#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<limits.h>

// 定义结构体
struct School {
	char name[20];
	char address[20];
};
struct Student
{
	char id[36];
	char name[36];
	int age;
	struct School s1;
};

// 结构体做参数
void print(struct Student stu) {
	printf("学校名字%s\n", stu.s1.name);
}
void p_print(struct Student* stu) {

}

int main() {
	struct Student stu = { "001","yuqn",23,{"广东工程职业技术学院" ,"广东省"}};
	struct Student* p_stu = &stu;
	printf("学校地址%s\n",stu.id);
	print(stu);
	p_print(p_stu);

	int t = -1;
	printf("%u",t);
	char a[1000];
	for (int i = 0; i < 1000;i++) {
		a[i] = -1 - i;
	}
	printf("============%d", strlen(a));

	float num_one = 10.5;
	double num_two = 10.5;
	return 0;
}