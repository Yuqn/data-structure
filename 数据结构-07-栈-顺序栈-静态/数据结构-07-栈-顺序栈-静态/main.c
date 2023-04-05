#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ���峤��
#define MaxSize 10

// ����ջ�ṹ
typedef struct Stack {
	int data[MaxSize];
	int ind;
}Stack;

// ʵ����ջ
void InitStack(Stack* S) {
	S->ind = -1;
}

// �ж�ջ�Ƿ�Ϊ��
int StackIsNull(Stack* S) {
	if (S->ind == -1) {
		return 1;
	}
	else
	{
		return -1;
	}
}

// ��Ԫ����ջ
int Push(Stack* S, int num) {
	// ����������Χ�����ʧ�ܣ���̬ջ�̶���С��
	if (S->ind == MaxSize - 1) {
		return -1;
	}
	S->ind = S->ind + 1;
	S->data[S->ind] = num;// ��ֵ
	return 0;
}

// ��ջ
int getStack(Stack* S) {
	// ����ǿ�ջ
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