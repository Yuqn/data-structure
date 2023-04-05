#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 构建串结构
typedef struct Strand {
	char ch;
	struct Strand* next;
}Strand;

// 初始化串
void InitStrand(Strand* S) {
	S->next = NULL;
}

int main() {
	Strand S;
	InitStrand(&S);
	return 0;
}