#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct STUDENT {
	int id;
	char name[10];
};
int main() {
	// 打开文件
	FILE* file = fopen("read.txt", "w");
	if (file == NULL) {
		perror("fopen");
		return 1;
	}
	// 写文件
	// fputc
	/*fputc('y', file);
	fputc('q', file);
	fputc('n', file);
	fputs('y', file);*/

	//写
	//struct STUDENT s = {1,"yuqn"};
	//fprintf(file, "%s %d", s.name,s.id);
	////读
	//fscanf("%s %d", s.name, &s.id);

	// 释放资源
	fclose(file);
	file = NULL;

	// 读取图片
	FILE* file_two = fopen("yuqn1.jpg", "w");
	if (file_two == NULL) {
		perror("fopen");
		return 1;
	}
	printf("图片地址%p\n", file_two);

	//读
	//fread(file_two,);

	// 释放资源
	fclose(file_two);
	file_two = NULL;

	printf("当前时间:%s\n",__DATE__);

	return 0;
}