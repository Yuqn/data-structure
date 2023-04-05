#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct  Student
{
	char name[10];
	int age;
};

void chang_arr(int* arr_one,int* arr_two) {
	int* arr_three = NULL;
	printf("没交换之前%d\n", arr_one[0]);
	printf("没交换之前%d\n", arr_one[1]);
	printf("没交换之前%d\n", arr_one[2]);
	printf("没交换之前%d\n", arr_one[3]);
	printf("没交换之前%d\n", arr_one[4]);
	arr_three = arr_one;
	arr_one = arr_two;
	arr_two = arr_three;
	printf("没交换之后%d\n", arr_two[0]);
	printf("没交换之后%d\n", arr_two[1]);
	printf("没交换之后%d\n", arr_two[2]);
	printf("没交换之后%d\n", arr_two[3]);
	printf("没交换之后%d\n", arr_two[4]);
}
int main() {
	short s = 5;
	// int a = 10;
	printf("%d\n",sizeof(int));
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	//printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);

	int a = 3;
	int b = 5;
	int c = 0;
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	printf("%d\n", c);

	struct Student stu ={"yuqn",22};
	struct Student* p_stu = &stu;
	printf("年龄：%d\n", stu.age);
	p_stu->age = 12;
	(*p_stu).age = 222;
	printf("年龄：%d\n", p_stu->age);

	int t = 1;
	int tt = t<<1;
	printf("左移%d\n",tt);

	int arr_one[] = {1,2,3,4,5};
	int arr_two[] = { 5,4,3,2,1 };
	chang_arr(arr_one, arr_two);
	
	float f_num = 45.002f;
	int z = (int)f_num;
	printf("浮点型f:%f\n",f_num);
	printf("整形z:%d\n", z);
	int scan_num_one = 0;
	int scan_num_two = 0;
	scanf("%d%d",&scan_num_one,&scan_num_two);

	return 0;
}