#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// �������ṹ
typedef struct Strand {
	char ch;
	struct Strand* next;
}Strand;

// ��ʼ����
void InitStrand(Strand* S) {
	S->next = NULL;
}

int main() {
	Strand S;
	InitStrand(&S);
	return 0;
}