#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ������󳤶�
#define MaxSize 10

// �������Ա���̬˳���
typedef struct List {
	// ���ݱ�
	int data[MaxSize];
	// �洢���ݳ���
	int len;
}List;

// �����������Ա���̬˳���
typedef struct ListH {
	// ��¼��ʼ�ͽ���λ��
	int start, end;
}ListH;

// ʵ�������Ա�
void InitList(List* L) {
	int i = 0;
	while (i < MaxSize) {
		L->data[i] = 0;
	}
	L->len = 0;
}

// ͨ���������ȡλ��
ListH getMid(int num) {
	ListH LH;
	// ģ�⸨����������
	LH.start = 10;
	LH.end = 12;
	return LH;
}

// �ֿ����
int getList(List* L, int num) {
	// ��ȡ����������
	ListH mid = getMid(num);
	// �����Ա����
	while (mid.start <= mid.end) {
		if (mid.start == num) { return mid.start; }
		mid.start++;
	}
	return -1;
}

int main() {
	return 0;
}