#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ������󳤶�
#define MaxSize 10

// ����ṹ
typedef struct List {
	int data[MaxSize];
	int len;
}List;

// ��������
int sortList(List* L) {
	int temp = -1;
	// �������Ա�
	for (int i = 1; i < L->len; i++) {
		// �ڶ�����ʼ�����ÿһ����ǰ��С���򽻻�λ��
		if (L->data[i] < L->data[i - 1]) {
			for (int j = i - 1; j >= 0 && L->data[j] > L->data[i]; j--) {
				L->data[j + 1] = L->data[j];
			}
		}
	}
	return -1;
}


int main() {
	return 0;
}