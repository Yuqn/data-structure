#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 设置最大字符串数
#define MaxSize 10

// 创建串结构（静态）
typedef struct Strand {
	char ch[MaxSize];
	int len;
}Strand;

// 初始化静态串
void InitStrand(Strand* S) {
	S->len = 0;
}

// ============================================

// 创建串结构（动态）
typedef struct Dstrand {
	char* Dch;
	int Dlen;
}Dstrand;

// 初始化（动态）
void DInitStrand(Dstrand* D) {
	D->Dch = (char*)malloc(MaxSize * sizeof(char));
	D->Dlen = 0;
}

int main() {
	Strand S;
	InitStrand(&S);
	return 0;
}