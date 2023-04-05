#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<errno.h>
#include<string.h>

tt(int x ,int y) {

}

int main() {


	FILE* file = fopen("E:\myFile\linux.txt", "r");
	if (file == NULL) {
		printf("%s\n",strerror(errno));
		return 1;
	}
	//¹Ø±Õ×ÊÔ´
	fclose(file);
	file = NULL;
	return 0;
}