#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 设置最大值
#define MaxSize 10

// 构建顺序串
typedef struct Strand {
	char ch[MaxSize];
	int len;
}Strand;

// 实例化串
void InitStrand(Strand* S) {
	S->len = 0;
}

// 插入数据
int PushStrand(Strand* S) {
	S->ch[0] = 'h';
	S->ch[1] = 'e';
	S->ch[2] = 'l';
	S->ch[3] = 'l';
	S->ch[4] = 'o';
	S->len = 5;
	printf("添加后的数据%c", S->ch[0]);
}

// 算法逻辑
int Index(Strand* S, Strand* T) {
	// 记录原串的下标
	int k = 0;
	// 记录原串、子串的对比位置
	int i = k, j = 0;
	// 循环对比
	while (i < S->len && j < T->len)
	{
		// 如果某个位置相等，则比较下一个位置的内容
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
	// 如果是下标超过子串长度，则存在相等，返回下标加一
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