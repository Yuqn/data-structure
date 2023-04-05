#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ������󳤶�
#define MaxSize 10 

// ����˳���ṹ��
typedef struct {
	int data[MaxSize]; // �����С
	int length; // ����
}SqlList;

// ��ʼ��˳���
void InitList(SqlList* L) {
	int i = 0;
	while (i < MaxSize)
	{
		L->data[i] = 0;
		i++;
	}
	L->length = 0;

	for (int j = 0; j < MaxSize; j++) {
		printf("%d\n", L->data[j]);
	}
}

// ���
int addList(SqlList *L, int address,int num) {
	for (int i = L->length; i > address; i--) {
		L->data[i] = L->data[i - 1];
	}
	L->data[address] = num;
	L->length += 1;
	return 0;
}

// ���ң���ֵ
int setbufList(SqlList *L,int num) {
	for (int i = 0; i < L->length; i++) {
		if(L->data[i] == num) {
			return i;
		}
	}
	return -1;
}


int main() {
	SqlList L; // ����˳���
	InitList(&L); // ʵ����˳���
	addList(&L, 1, 1);
	for (int j = 0; j < MaxSize; j++) {
		printf("%d\n", L.data[j]);
	}
	int sy = setbufList(&L,1);
	printf("-----%d",sy);
	return 0;
}