#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//交换两值
//int main() {
//	int a = 3;
//	int b = 10;
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//int main() {
//	//& 按位与（二进制位）
//	int a = 3;
//	int b = 5;
//	//int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001	两个都为一才是一（补码）
//	//printf("%d\n", c);
//
//	//|	按位或
//	//int c = a | b;
//	//printf("%d\n", c);
//	//00000000000000000000000000000111	7
//
//	//按位异或
//	//int c = a ^ b;//相同为0，相异为1
//	//00000000000000000000000000000110	6
//	//printf("%d\n", c);
//	//return 0;
//}

//int main() {
//	int a = 5;
//	int b = a << 1;
//	//左移操作符，左边丢弃右边补齐
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int a = -1;
//	//>>  右移操作符，移动的是二进制位	1，算术右移（右边丢弃，左边补原符号位）	2，逻辑右移（右边丢弃，左边补0）
//	//储存到内存的是补码
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	double a= 5.0 / 2;
//	int b = 5 % 2;//%只能用于整数
//	printf("%lf\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	char c;
//	while (cin >> c) {
//		printf("    %c\n", c);
//		printf("  %c %c %c\n", c,c,c);
//		printf("%c %c %c %c %c\n", c,c,c,c,c);
//	}
//}