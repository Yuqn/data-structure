#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// �������ڵ���
#define MaxSize 10

// �����������ṹ����ȫ��������
typedef struct TreeTwo {
	int data; // �ڵ�����Ԫ��
	int isNull; // �ڵ��Ƿ�Ϊ��
}TreeTwo;

// ��ʼ��
void InitTree(TreeTwo* T) {
	for (int i = 0; i < MaxSize; i++) {
		// Ĭ�����нڵ㶼�����ӽڵ�
		T[i].isNull = -1;
	}
}

int main() {
	TreeTwo t[MaxSize]; // ��ÿһ���ڵ���������У��������洢��ʽ��ͬ
	InitTree(t);
	return 0;
}