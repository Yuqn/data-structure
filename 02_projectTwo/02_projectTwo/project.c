#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ���峣�� define
#define MAX 10

// �����
#define MAX_S(X,Y)(X>Y?X:Y)

// ����ö��
enum Sex
{
	NAN = 't',
	NV = 'o'
};

int main() {
	// ���峣�� const
	const int num = 20;
	printf("const���γ���%d\n",num);
	printf("define���γ���%d\n", MAX);
	enum Sex sec = NAN;
	printf("���ö��%c\n",NAN);
	printf("���ö��%c\n", NV);
	printf("��ֵ��ö��ֵ%c\n", sec);

	// �����ַ���
	char str1[] = "abcde";
	char str2[] = { 'a','b','c','d','e','\0' };
	printf("�ַ���str1%s\n", str1);
	printf("�ַ���str2%s\n", str2);
	printf("�ַ���str1����%d\n", strlen(str1));

	// ascii ����
	char asi = 'a';
	int asiTwo = 67;
	printf("asi�ı���Ϊ%d\n", asi);
	printf("asiTwo�Ķ�Ӧ���ַ�Ϊ%c\n", asiTwo);

	// �ж����
	int ifNum = 0;
	printf("���������ݣ�0/1������");
	scanf("%d", &ifNum);
	if (ifNum == 0) {
		printf("������0");
	}
	else {
		printf("������1");
	}

	// ��Ŀ�����
	printf("��Ŀ�����%d\n",1 >= 2 ? 1 : 0);

	// ��
	printf("���ʹ��%d\n", MAX_S(10, 20));

	// ��ӡ��ַ
	// ָ����� int* ��ʾ,* + ���� ��ʾ�ҵ���ַ��Ӧ�Ķ���
	int* p = &ifNum;
	printf("��ӡ��ַ%p\n", p);
	printf("��ӡ��ַ%p\n", &ifNum);
	printf("ifNum%d\n", ifNum);
	printf("��ӡ��ַ��Ӧ�Ķ���%d\n", *p);

	char ch = 'a';
	printf("�Զ����ַ�������%c\n",ch);
	char* pCh = &ch;
	printf("��ȡ���Զ������ch�ĵ�ַΪ��%p\n", pCh);
	*pCh = 'A';
	printf("�޸ĺ��ֵΪ��%c\n",ch);

	return 0;
}