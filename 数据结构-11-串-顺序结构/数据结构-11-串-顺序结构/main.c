#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// ��������ַ�����
#define MaxSize 10

// �������ṹ����̬��
typedef struct Strand {
	char ch[MaxSize];
	int len;
}Strand;

// ��ʼ����̬��
void InitStrand(Strand* S) {
	S->len = 0;
}

// ============================================

// �������ṹ����̬��
typedef struct Dstrand {
	char* Dch;
	int Dlen;
}Dstrand;

// ��ʼ������̬��
void DInitStrand(Dstrand* D) {
	D->Dch = (char*)malloc(MaxSize * sizeof(char));
	D->Dlen = 0;
}

int main() {
	Strand S;
	InitStrand(&S);
	return 0;
}