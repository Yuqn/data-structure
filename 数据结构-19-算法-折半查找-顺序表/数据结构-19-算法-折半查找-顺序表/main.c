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

// ʵ�������Ա�
void InitList(List* L){
	int i = 0;
	while (i < MaxSize) {
		L->data[i] = 0;
	}
	L->len = 0;
}

// �۰���ң������±�
int getList(List* L,int num) {
	// ���������������м�ֵ
	int lk = 0, rk = L->len - 1, mid = 0;
	while (lk < rk) {
		// ��ȡ�м�ֵ
		mid = (rk + lk) / 2;
		// �Ƚ�
		if (L->data[mid] == num) {
			return mid;
		}
		else if (L->data[mid] < num){
			lk = mid;
		}
		else if(L->data[mid] > num) {
			rk = mid;
		}
	}
	return -1;
}

int main() {
	return 0;
}