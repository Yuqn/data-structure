#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

struct S
{
	int n;
	int arr[0];
};

int main() {
	//ͨ�����ٿռ䴴�����������С
	//����ʮ�����鳤�ȿռ䣬������44����
	struct S* ps =(struct S*) malloc(sizeof(struct S)+10*sizeof(int));
	//���ӿռ�
	struct S* psadd = (struct S*)realloc(ps, sizeof(struct S) + 20*sizeof(int));
	if (psadd != NULL) {
		ps = psadd;
	}
	//�ͷ�
	free(ps);
	ps = NULL;

	// ����
	struct S s = {0};
	struct S* cs_p = &s;
	struct S* m_p = (struct S*)malloc(sizeof(struct S) + 4 * sizeof(int));
	if (m_p != NULL) {
		cs_p = m_p;
	}
	struct S* m_p_add = realloc(m_p, sizeof(struct S) + 20 * sizeof(int));
	if (m_p_add != NULL) {
		cs_p = m_p_add;
	}
	free(cs_p);
	cs_p = NULL;


	return 0;
}