#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ������󳤶�
#define MaxSize 10

// ����˳���ṹ
typedef struct List {
	// ��������(�����Ծ�̬�洢��ʽ���������ʹ�ö�̬�洢����ʹ��malloc�������ٿռ伴��)
	int arr[MaxSize];
	// ��¼���鳤��
	int len;
}List;

// ʵ������
void InitList(List* L) {
	int i = 0;
	while (i<MaxSize)
	{
		L->arr[i] = 0;
	}
	L->len = 0;
}

// �������
int AddList(List* L,int num) {
	/*
		����������
	*/
	return 0;
}

// ˳������㷨
// �����±꣬ʧ�ܷ���-1
int getList(List* L, int num) {
	// ��¼λ��
	int i = 0;
	// ������
	while (i < L->len)
	{
		// ����ҵ����˳�����
		if (L->arr[i] == num) { return i; }
		i++;
	}
	return -1;
}

int main() {
	List L;
	InitList(&L);
	return 0;
}