#define _CRT_SECURE_NO_WARNINGS

// ������ļ�
#include<stdio.h>
#include<Windows.h>

// �����ļ�
#include "add.h"

// ���峣��
#define def_max 100;


// ����ṹ��
struct Student
{
	char name[10];
	int age;
};

// �����
#define hone_max(x,y)(x>y?x:y)
int main() {
	printf("����֮��Ϊ%d\n", add(20, 20));
	// �߳�˯��
	Sleep(2000);
	int arr[] = { 1,2,3 };
	printf("��%d", hone_max(10, 20));
	// �ṹ�帳ֵ
	struct Student student = { "yuqn",22 };
	struct Student * ps = &student;
	// �ṹ��ȡֵ
	printf("�ṹ��ȡֵ%s\n", student.name);
	printf("�ṹ��ȡֵ%s %d\n", (*ps).name,(*ps).age);
	printf("�ṹ��ȡֵ%s %d\n", ps->name, ps->age);
	return 0;
}