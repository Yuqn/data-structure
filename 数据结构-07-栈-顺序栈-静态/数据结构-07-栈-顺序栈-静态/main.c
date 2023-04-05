#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 定义长度
#define MaxSize 10

// 创建栈结构
typedef struct Stack {
	int data[MaxSize];
	int ind;
}Stack;

// 实例化栈
void InitStack(Stack* S) {
	S->ind = -1;
}

// 判断栈是否为空
int StackIsNull(Stack* S) {
	if (S->ind == -1) {
		return 1;
	}
	else
	{
		return -1;
	}
}

// 新元素入栈
int Push(Stack* S, int num) {
	// 如果超过最大范围，添加失败（静态栈固定大小）
	if (S->ind == MaxSize - 1) {
		return -1;
	}
	S->ind = S->ind + 1;
	S->data[S->ind] = num;// 赋值
	return 0;
}

// 出栈
int getStack(Stack* S) {
	// 如果是空栈
	if (S->ind == -1) {
		return -1;
	}
	S->ind--;
	return S->data[S->ind + 1];
}

int main(){
	Stack S;
	InitStack(&S);
	Push(&S,11);
	int res = getStack(&S);
	printf("%d\n",res);
	return 0;
}