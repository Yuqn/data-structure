#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct STUDENT {
	int id;
	char name[10];
};
int main() {
	// ���ļ�
	FILE* file = fopen("read.txt", "w");
	if (file == NULL) {
		perror("fopen");
		return 1;
	}
	// д�ļ�
	// fputc
	/*fputc('y', file);
	fputc('q', file);
	fputc('n', file);
	fputs('y', file);*/

	//д
	//struct STUDENT s = {1,"yuqn"};
	//fprintf(file, "%s %d", s.name,s.id);
	////��
	//fscanf("%s %d", s.name, &s.id);

	// �ͷ���Դ
	fclose(file);
	file = NULL;

	// ��ȡͼƬ
	FILE* file_two = fopen("yuqn1.jpg", "w");
	if (file_two == NULL) {
		perror("fopen");
		return 1;
	}
	printf("ͼƬ��ַ%p\n", file_two);

	//��
	//fread(file_two,);

	// �ͷ���Դ
	fclose(file_two);
	file_two = NULL;

	printf("��ǰʱ��:%s\n",__DATE__);

	return 0;
}