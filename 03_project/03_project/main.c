#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include <iostream>

// �����ṹ��
struct Student
{
	char id[100];
	char name[10];
	int age;
};

int main() {
	
	// ʵ����
	struct Student stu = { "1906200329","�����",20};
	// stu.id = "1111111"; -----------���Ǵ���ʾ������Ϊid���ַ����飬����ʹ�� strcpy(ԭ���飬������) ����
	strcpy(stu.name, "yuqn");
	printf("�ṹ������%s\n", stu.id);
	printf("�ṹ������%s\n", stu.name);
	printf("�ṹ������%d\n", stu.age);

	// ͨ��ָ��ķ�����ȡ�ṹ������
	struct Student* p_stu = &stu;
	printf("�ṹ����ڵ�ַΪ%p\n",p_stu);
	printf("ͨ��ָ��ķ�����ȡ�ṹ������%s\n", p_stu->name);


	return 0;
}