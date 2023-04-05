#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 定义常量 define
#define MAX 10

// 定义宏
#define MAX_S(X,Y)(X>Y?X:Y)

// 定义枚举
enum Sex
{
	NAN = 't',
	NV = 'o'
};

int main() {
	// 定义常量 const
	const int num = 20;
	printf("const修饰常量%d\n",num);
	printf("define修饰常量%d\n", MAX);
	enum Sex sec = NAN;
	printf("输出枚举%c\n",NAN);
	printf("输出枚举%c\n", NV);
	printf("赋值的枚举值%c\n", sec);

	// 定义字符串
	char str1[] = "abcde";
	char str2[] = { 'a','b','c','d','e','\0' };
	printf("字符串str1%s\n", str1);
	printf("字符串str2%s\n", str2);
	printf("字符串str1长度%d\n", strlen(str1));

	// ascii 编码
	char asi = 'a';
	int asiTwo = 67;
	printf("asi的编码为%d\n", asi);
	printf("asiTwo的对应的字符为%c\n", asiTwo);

	// 判断语句
	int ifNum = 0;
	printf("请输入内容（0/1）》：");
	scanf("%d", &ifNum);
	if (ifNum == 0) {
		printf("输入了0");
	}
	else {
		printf("输入了1");
	}

	// 三目运算符
	printf("三目运算符%d\n",1 >= 2 ? 1 : 0);

	// 宏
	printf("宏的使用%d\n", MAX_S(10, 20));

	// 打印地址
	// 指针变量 int* 表示,* + 变量 表示找到地址对应的对象
	int* p = &ifNum;
	printf("打印地址%p\n", p);
	printf("打印地址%p\n", &ifNum);
	printf("ifNum%d\n", ifNum);
	printf("打印地址对应的对象%d\n", *p);

	char ch = 'a';
	printf("自定义字符变量：%c\n",ch);
	char* pCh = &ch;
	printf("获取的自定义变量ch的地址为：%p\n", pCh);
	*pCh = 'A';
	printf("修改后的值为：%c\n",ch);

	return 0;
}