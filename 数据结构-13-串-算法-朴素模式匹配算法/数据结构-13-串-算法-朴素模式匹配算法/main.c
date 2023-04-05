#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// �������ֵ
#define MaxSize 10

// ����˳��
typedef struct Strand {
	char ch[MaxSize];
	int len;
}Strand;

// ʵ������
void InitStrand(Strand* S) {
	S->len = 0;
}

// ��������
int PushStrand(Strand* S) {
	S->ch[0] = 'h';
	S->ch[1] = 'e';
	S->ch[2] = 'l';
	S->ch[3] = 'l';
	S->ch[4] = 'o';
	S->len = 5;
	printf("��Ӻ������%c", S->ch[0]);
}

// �㷨�߼�
int Index(Strand* S, Strand* T) {
	// ��¼ԭ�����±�
	int k = 0;
	// ��¼ԭ�����Ӵ��ĶԱ�λ��
	int i = k, j = 0;
	// ѭ���Ա�
	while (i < S->len && j < T->len)
	{
		// ���ĳ��λ����ȣ���Ƚ���һ��λ�õ�����
		if (S->ch[i] == T->ch[j]) {
			i++;
			j++;
		}
		else
		{
			k++;
			i = k;
			j = 0;
		}
	}
	// ������±곬���Ӵ����ȣ��������ȣ������±��һ
	if (j >= T->len) {
		return ++k;
	}
	else
	{
		return 0;
	}
}

int main() {
	Strand S;
	InitStrand(&S);
	PushStrand(&S);
	return 0;
}